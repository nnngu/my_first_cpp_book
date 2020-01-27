// 定义链表数据结构
struct link {
	int data; // 当前节点的数据
	link* next; // 指向下一个节点的指针
};

// 反转链表函数
void reverse(link*& head)
{
	// 对输入参数的有效性进行验证
	// 这是一个很好的编程习惯，将为你在考官面前加分不少
	if (head == NULL)
	{
		return;
	}
	// 定义前一节点、当前节点和后一节点
	link *pre, *cur, *next;
	pre = head;
	cur = head->next;
	while(cur) 
	{		   
		next = cur->next; 
		cur->next = pre; 
		pre = cur; 
		cur = next; 
	}
	head->next = NULL;
	head = pre;
}







