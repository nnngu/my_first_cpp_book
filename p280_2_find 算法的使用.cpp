// 创建保存商品信息的 vector 容器
vector<string> vecGoods;
// 向容器中添加商品
vecGoods.push_back("Eraser");
vecGoods.push_back("Book");
vecGoods.push_back("Pen");
// 定义要购买的商品
string strGood = "Pencil";
// “老板，你们这里有没有卖铅笔的啊？”
// “稍等，让我找找看”
vector<string>::iterator it = find(vecGoods.begin(), vecGoods.end(),
	strGood);

if (it != vecGoods.end())
{
	cout<<"恭喜，本店提供"<<strGood<<endl;
}
else
{
	cout<<"抱歉，本店不提供"<<strGood<<endl;
}