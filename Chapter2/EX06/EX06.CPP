//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
class animal
{
public:
	animal(int height, int weight)
	{
		cout<<"animal construct"<<endl;
	}
	~animal()
	{
		cout<<"animal destruct"<<endl;
	}
	void eat()
	{
		cout<<"animal eat"<<endl;
	}
	void sleep()
	{
		cout<<"animal sleep"<<endl;
	}
	void breathe()
	{
		cout<<"animal breathe"<<endl;
	}
};
class fish:public animal
{
public:
	fish():animal(400,300)
	{
		cout<<"fish construct"<<endl;
	}
	~fish()
	{
		cout<<"fish destruct"<<endl;
	}	
};
void main()
{
	fish fh;
}

//原程序
//#include <iostream.h>
//class animal
//{
//public:
//	animal(int height, int weight)
//	{
//		cout << "animal construct" << endl;
//	}
//	~animal()
//	{
//		cout << "animal destruct" << endl;
//	}
//	void eat()
//	{
//		cout << "animal eat" << endl;
//	}
//	void sleep()
//	{
//		cout << "animal sleep" << endl;
//	}
//	void breathe()
//	{
//		cout << "animal breathe" << endl;
//	}
//};
//class fish :public animal
//{
//public:
//	fish() :animal(400, 300)
//	{
//		cout << "fish construct" << endl;
//	}
//	~fish()
//	{
//		cout << "fish destruct" << endl;
//	}
//};
//void main()
//{
//	fish fh;
//}