// 保存 C1 和 C2 班级成绩的容器
vector<int> vecScoreC1;
vector<int> vecScoreC2;

// 对容器进行操作，将成绩保存到各自的容器中
// ...

// 保存所有成绩的总容器
vector<int> vecScore;
// 根据各个分容器的大小，重新设定总容器的容量，
// 使它可以容纳即将复制进来的数据
vecScore.resize(vecScoreC1.size() + vecScoreC2.size());
// 将第一个容器 vecScoreC1 中的数据复制到 vecScore 中
vector<int>::iterator lastit = copy(vecScoreC1.begin(), vecScoreC1.end(), vecScore.begin());
// 将第二个容器 vecScoreC2 中的数据追加到 vecScore 的末尾
copy(vecScoreC2.begin(), vecScoreC2.end(), lastit);












