// 利用 max_element 和 min_element 算法，可以方便地获得
// vecRect 容器中的最大矩形和最小矩形
vector<Rect>::iterator maxit = max_element(vecRect.begin(), vecRect.end());
// 通过指向这个最大值的迭代器访问最大值
Rect maxRect = *(maxit);
// 利用 min_element()算法获取 vecRect 容器中的最小值
vector<Rect>::iterator minit = min_element(vecRect.begin(), vecRect.end());
Rect minRect = *(minit);



// 也可以通过一个函数或者函数对象作为这两个算法的第三个参数对比较规则进行重新定义，实现算法的自定义
// 比较两个矩形的周长，对比较规则进行重新定义
bool maxbyGirth(Rect rect1, Rect rect2)
{
	return (rect1.m_fW + rect1.m_fH) < (rect2.m_fW + rect2.m_fH);
}

// 获取 vecRect 容器中周长最长的矩形
vector<Rect>::iterator maxgitrhit = max_element(vecRect.begin(), 
								vecRect.end(),
								maxbyGirth);
























