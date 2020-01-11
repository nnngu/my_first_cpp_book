// 例如：可以利用下面的代码将 vecScoreC1 和 vecScoreC2 两个容器中的数据经过排序后合并到目标容器 vecScore 中

// 在使用 merge() 算法进行合并之前，必须使用 sort() 算法对两个源容器中的数据进行排序
sort(vecScoreC1.begin(), vecScoreC1.end());
sort(vecScoreC2.begin(), vecScoreC2.end());

// 调整目标容器的大小，以便容纳合并进来的数据
vecScore.resize(vecScoreC1.size() + vecScoreC2.size());
// 使用 merge() 算法将 vecScoreC1 和 vecScoreC2 两个容器中的数据
// 合并到目标容器 vecScore 中
merge(vecScoreC1.begin(), vecScoreC1.end(),
	vecScoreC2.begin(), vecScoreC2.end(),
	vecScore.begin());













