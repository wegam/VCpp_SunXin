//�������汾�����޸ģ���Ŀ������>C/C++>��������>���ú���������>�� (/Gy)
#include <iostream>			//#include <iostream.h>Ӧ���޸�Ϊ#include <iostream>
using namespace std;		//���Ӵ����ᱨC2065����
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



//ԭ����======================================================================
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
