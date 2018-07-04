//原程序
//#include <iostream.h>			//#include <iostream.h>应该修改为#include <iostream>
//struct point
//{
//	int x;
//	int y;
//	void output()
//	{
//		cout << x << endl << y << endl;
//	}
//};
//
//void main()
//{
//	point pt;
//	pt.x = 0;
//	pt.y = 0;
//	//	cout<<pt.x<<endl<<pt.y<<endl;
//	pt.output();
//}
//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>			//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
struct point
{
	int x;
	int y;
	void output()
	{
		cout<<x<<endl<<y<<endl;
	}
};

void main()
{
	point pt;
	pt.x=0;
	pt.y=0;
//	cout<<pt.x<<endl<<pt.y<<endl;
	pt.output();
}