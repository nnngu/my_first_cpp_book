template<class RandomAccessIterator, class Compare>
	void sort(RandomAccessIterator first, RandomAccessIterator last,
			Compare comp);




// 利用 sort 算法中的比较函数重新定义容器中 Rect 对象的比较规则
// 比较函数的两个参数的数据类型就是容器中的数据类型，而返回值类型是 bool 类型
bool sortbyH(Rect rect1, Rect rect2)
{
	// 在比较函数中，我们定义具体的比较规则，
	// 这里比较两个矩形的长
	return rect1.m_fH < rect2.m_fH;
}
// 使用自定义的比较规则代替默认的比较规则对容器中的数据进行排序
sort(vecRect.begin(), vecRect.end(), sortbyH);

















