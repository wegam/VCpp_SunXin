//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
#include "fish.h"
using namespace std;		//不加此名会报C2065错误
void fish::breathe()
{
	cout << "fish bubble" << endl;
}
//原程序
//#include "fish.h"
//#include <iostream.h>
//void fish::breathe()
//{
//	cout<<"fish bubble"<<endl;
//}