//原程序
//#include <iostream.h>
//class point
//{
//public:
//	int x;
//	int y;
//	point()
//	{
//		x = 0;
//		y = 0;
//	}
//	point(int a, int b)
//	{
//		x = a;
//		y = b;
//	}
//	void output()
//	{
//		cout << x << endl << y << endl;
//	}
//};
//
//
//void main()
//{
//	point pt(5, 5);
//	pt.output();
//}
//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
class point
{
public:
	int x;
	int y;
	point()
	{
		x=0;
		y=0;
	}
	point(int a,int b)
	{
		x=a;
		y=b;
	}
	void output()
	{
		cout<<x<<endl<<y<<endl;
	}
};


void main()
{
	point pt(5,5);
	pt.output();
}