//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>			//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
class Point
{
public:
	void output()
	{
		init();
	}
	static void init()
	{
		x = 0;
		y = 0;
	}
private:
	static int x, y;
};

int Point::x = 0;
int Point::y = 0;
void main()
{
	//	Point pt;
	//	pt.init();
	//	pt.output();

	Point::init();
	//	Point::output();
}



//原程序======================================================================
//#include <iostream.h>
//
//class Point
//{
//public:
//	void output()
//	{
//		init();
//	}
//	static void init()
//	{
//		x=0;
//		y=0;
//	}
//private:
//	static int x,y;
//};
//
//int Point::x=0;
//int Point::y=0;
//void main()
//{
////	Point pt;
////	pt.init();
////	pt.output();
//
//	Point::init();
////	Point::output();
//}
