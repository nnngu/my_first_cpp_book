// 创建一个Employee对象
Employee emp1;
// 使用pair<int, Employee>模板类建立员工号1和员工对象emp1的联系，
// 将pair<int, Employee>模板类创建的对象插入map容器中
mapEmployee.insert(pair<int, Employee>(1,emp1));


// 使用value_type类型实现数据的插入
mapEmployee.insert(map<int, Employee>::value_type(1, emp1));


// 使用 [] 直接向map容器中插入数据
// 向mapEmployee容器中插入一个数据对(1983, emp1)
mapEmployee[1983] = emp1;


/*
如果使用自定义的数据类型作为map容器的键，就需要重载"<"运算符，以实现map容器的排序
*/










