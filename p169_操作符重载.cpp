// 母亲类
class Mother
{
	// 省略声明和定义
};

// 孩子类
class Baby
{
public:
	// 孩子类的构造函数
	Baby(string strName)
		: m_strName(strName)
	{}
private:
	// 孩子的名字
	string m_strName;
};

// 父亲类
class Father
{
public:
	// 重载操作符“+”
	Baby operator + (const Mother& mom)
	{
		// 创建一个 Baby 对象并返回
		return Baby("ChenXibwei");
	}
};