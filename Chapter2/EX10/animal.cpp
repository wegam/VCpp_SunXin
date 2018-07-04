//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
#include "animal.h"
using namespace std;		//不加此名会报C2065错误
animal::animal()
{
}

animal::~animal()
{
}

void animal::eat()
{
}

void animal::sleep()
{
}

void animal::breathe()
{
	cout << "animal breathe" << endl;
}
//原程序
//#include "animal.h"
//#include <iostream.h>
//animal::animal()
//{
//}
//
//animal::~animal()
//{
//}
//
//void animal::eat()
//{
//}
//
//void animal::sleep()
//{
//}
//
//void animal::breathe()
//{
//	cout<<"animal breathe"<<endl;
//}