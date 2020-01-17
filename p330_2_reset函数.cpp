shared_ptr<Employee> spEmployee1(new Employee("Jiawei"));
// 断开spEmployee1与Employee对象的联系，引用计数减1
spEmployee1.reset();
// 将spEmployee1重新指向另一个Employee对象
spEmployee1.reset(new Employee("ChenLiangqiao"));



