//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
class B1
{
public:
	void output();
};
class B2
{
public:
	void output();
};
void B1::output()
{
	cout<<"call the class B1"<<endl;
}
void B2::output()
{
	cout<<"call the class B2"<<endl;
}
class A:public B1,public B2
{
public:
	void show();
};
void A::show()
{
	cout<<"call the class A"<<endl;
}
void main()
{
	A a;
	a.output();         //该语句编译时会报错
	a.show();
}

//原程序
//#include <iostream.h>
//class B1
//{
//public:
//	void output();
//};
//class B2
//{
//public:
//	void output();
//};
//void B1::output()
//{
//	cout << "call the class B1" << endl;
//}
//void B2::output()
//{
//	cout << "call the class B2" << endl;
//}
//class A :public B1, public B2
//{
//public:
//	void show();
//};
//void A::show()
//{
//	cout << "call the class A" << endl;
//}
//void main()
//{
//	A a;
//	a.output();         //该语句编译时会报错
//	a.show();
//}