// 定义一个 unique_ptr，并将其与一个 Employee 对象关联
unique_ptr<Employee> upEmployee(new Employee);
// 使用"->"运算符，直接访问 unique_ptr 所指向对象的成员函数
int nAge = upEmployee->GetAge();
// 使用"*"运算符，获得 unique_ptr 所指向的对象
PrintObj(*upEmployee);



