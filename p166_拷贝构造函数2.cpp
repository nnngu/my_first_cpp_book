// 引入断言所在的头文件
#include<assert.h>

// 创建一个Computer对象oldcom
Computer oldcom;
// 创建oldcom的Keyboard对象并修改其属性
Keyboard keyboard;
keyboard.m_strModel = "Microsoft-101";
oldcom.SetKeyboard(&keyboard);
// 利用Computer类的拷贝构造函数创建新对象newcom
// 新的newcom对象是oldcom对象的一个副本
Computer newcom(oldcom);

// 使用断言assert()判断两个Computer对象的m_pKeyboard属性不同，
// 也就是它们分别指向两个不同的Keyboard对象，
// 但是，这两个Keyboard对象的属性却是相同的
assert( newcom.GetKeyboard() != oldcom.GetKeyboard() );
assert( newcom.GetKeyboard()->m_strModel != oldcom.GetKeyboard()->m_strModel );
