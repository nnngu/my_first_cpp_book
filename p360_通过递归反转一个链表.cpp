// 通过递归反转链表
link* reverse(link* p, link*& head)
{
	// 判断是否满足返回条件
	if (p == NULL || p->next == NULL)
	{
		head = p;
		return p;
	}
	else 
	{
		link* tmp = reverse(p->next, head);
		tmp->next = p;
		return p;
	}
}




