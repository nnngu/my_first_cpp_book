// 定义总商品清单
vector<string> vecGoods;

// 文具类货物清单
vector<string> vecStationaries;
vecStationaries.push_back("Pen");
vecStationaries.push_back("Erase");

// 办公用品类商品清单
vector<string> vecOfficeSupplies;
vecOfficeSupplies.push_back("Folder");
vecOfficeSupplies.push_back("Pen");

// 根据源容器的数据多少调整目标容器的大小
vecGoods.resize(vecStationaries.size() + vecOfficeSupplies.size());

// 对源容器进行排序
sort(vecStationaries.begin(), vecStationaries.end());
sort(vecOfficeSupplies.begin(), vecOfficeSupplies.end());

// 使用 set_union() 算法将源容器中的数据合并到目标容器中
vector<string>::iterator itend = 
	set_union(vecStationaries.begin(), vecStationaries.end(),
		vecOfficeSupplies.begin(), vecOfficeSupplies.end(),
		vecGoods.begin());

// 输出合并后的商品
for(auto it = vecGoods.begin(); it != itend(); ++it)
	cout<<*it<<endl;




















