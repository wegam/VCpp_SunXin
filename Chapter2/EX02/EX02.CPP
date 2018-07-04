//原程序
//#include <iostream.h>		//#include <iostream.h>应该修改为#include <iostream>
//class point
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
	void output()
	{
		cout<<x<<endl<<y<<endl;
	}
};

void main()
{
	point pt;
	pt.x=1;
	pt.y=2;
	pt.output();
}