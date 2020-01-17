shared_ptr<Employee> spEmployee1(new Employee("Jiawei"));
shared_ptr<Employee> spEmployee2(new Employee("ChenLiangqiaoo"));
// 交换 spEmployee1 和 spEmployee2 所指向的对象，同时改变它们的引用计数
// 交换之后，spEmployee1 指向 Employee("ChenLiangqiaoo")，
// 而 spEmployee2 则指向 Employee("Jiawei")
spEmployee1.swap(spEmployee2);




