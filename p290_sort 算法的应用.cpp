// 创建保存姓名的容器
vector<string> vecName;
// 将姓名保存到容器中
vecName.push_back("Jiawei");
vecName.push_back("ChenLiangqiao");
vecName.push_back("Jiajunpeng");
vecName.push_back("Xibei");
// 使用 sort() 算法对容器中的数据进行排序
// 这里需要指定排序的起始位置和终止位置
sort(vecName.begin(), vecName.end()); // 默认从小到大排序

// 将排序完成的容器进行翻转，以实现从大到小排序
reverse(vecName.begin(), vecName.end());



// 需要重载小于运算符 < 的情况，
// 表示矩形的 Rect 对象，我们希望按照矩形的面积进行排序
class Rect
{
public:
	// 构造函数，设定矩形的长和宽
	Rect(float fW, float fH)
		: m_fW(fW), m_fH(fH) {};
	// 重载操作符"<"，用于比较两个矩形的大小
	// 它的参数是另一个 Rect 对象的引用
	bool operator < (const Rect& rRectOther)
	{
		// 计算两个矩形的面积
		float fArea = m_fW * m_fH;
		float fAreaOther = rRectOther.m_fW * rRectOther.m_fH;
		// 返回两个面积比较的结果作为两个矩形比较的结果
		return fArea < fAreaOther;
	};
public:
	// 矩形的属性：长和宽
	float m_fW;
	float m_fH;
};

// 创建保存 Rect 对象的容器
vector<Rect> vecRect;
// 将 Rect 对象添加到容器中
vecRect.push_back(Rect(3,4));
vecRect.push_back(Rect(6,7));
vecRect.push_back(Rect(8,1));
// 对容器中的数据进行排序
sort( vecRect.begin(), vecRect.end() );
























