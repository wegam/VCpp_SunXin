//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>			//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
int a = 6;
class CPoint
{
public:
	CPoint()
	{
	}
};

CPoint pt;
void main()
{
	cout << a << endl;
}

//原程序
//#include <iostream.h>
//int a=6;
//class CPoint
//{
//public:
//	CPoint()
//	{
//	}
//};
//
//CPoint pt;
//void main()
//{
//	cout<<a<<endl;
//
//}