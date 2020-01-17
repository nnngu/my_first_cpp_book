// "="赋值操作符将结束一个智能指针原有的指向，指向新的资源
shared_ptr<Employee> spEmployee1(new Employee("Jiawei"));
shared_ptr<Employee> spEmployee2(new Employee("ChenLiangqiao"));
// 构造一个空的shared_ptr，不指向任何对象
shared_ptr<Employee> spEmployee0;
// 将spEmployee0指向spEmployee1所指向的对象
// 这时 spEmployee1的引用计数是2
spEmployee0 = spEmployee1;
cout<<"员工的名字是"<<spEmployee0->GetName()<<endl;
// 结束spEmployee0对spEmployee1的指向，
// 将spEmployee0指向spEmployee2所指向的对象
// 这时spEmployee1的引用计数减少为1，spEmployee2的引用计数增加为2
spEmployee0 = spEmployee2;
cout<<"员工的名字是"<<spEmployee0->GetName()<<endl;











