// 班里只有三个同学
Student st1("ChenLiangqiao", 173);
Student st2("Jiawei", 163);
Student st3("Jiajunpeng", 187);

// 老师用 push_back() 函数将我们召集到 vector 容器中
vector<Student> vecStu;
vecStu.push_back(st1);
vecStu.push_back(st2);
vecStu.push_back(st3);

// 算法老师用 copy_backward() 算法将隔壁班的同学合并到我们所在的 vecStu 容器中
// 扩大我们所在容器的容量，为新来的同学腾出点地方
vecStu.resize(vecStu.size() + vecStuC2.size());
// 将新同学对象复制到我们的容器中，欢迎新同学





