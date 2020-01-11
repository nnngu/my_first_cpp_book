// 保存学生对象的容器
vector<Student> vecStudent;
// 将数据保存到容器中...
// 扩大容器的容量为原来的两倍
// 这样容器中前半部分是已有的数据，后半部分是默认生成的数据
vecStudent.resize(vecStudent.size() * 2);
// 将前半部分已有的数据复制到后半部分，替换掉后半部分默认的数据
copy_backward(vecStudent.begin(), 
	vecStudent.begin() + vecStudent.size() / 2,
	vecStudent.end());





