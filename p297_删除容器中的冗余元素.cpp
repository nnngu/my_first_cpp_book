// 这里的st1和st3虽然是不同的对象，但是它们的属性都相同，代表了相同的意义，因而是冗余元素
Student st1("ChenLiangqiao", 173);
Student st2("Jiawei", 163);
Student st3("ChenLiangqiao", 173);

// 将这些对象添加到容器中，容器中产生了冗余元素
vecStu.push_back(st1);
vecStu.push_back(st2);
vecStu.push_back(st3);


// STL 瘦身大法第一步：排序
sort(vecStu.begin(), vecStu.end(), sortbyHeight);

// 第二步：删除容器中的冗余元素，需要重载Student类的 operator == 运算符
vector<Student>::iterator it = unique(vecStu.begin(), vecStu.end());

// 第三步：删除容器末尾遗留的多余元素
vecStu.erase(it, vecStu.end());











