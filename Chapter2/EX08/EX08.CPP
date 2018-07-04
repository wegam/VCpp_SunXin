//编译器版本更新修改：项目》属性>C/C++>代码生成>启用函数级连接>是 (/Gy)
#include <iostream>		//#include <iostream.h>应该修改为#include <iostream>
using namespace std;		//不加此名会报C2065错误
class animal
{
public:
	void eat()
	{
		cout << "animal eat" << endl;
	}
	void sleep()
	{
		cout << "animal sleep" << endl;
	}
	virtual void breathe()
	{
		cout << "animal breathe" << endl;
	}
};
class fish :public animal
{
public:
	void breathe()
	{
		cout << "fish bubble" << endl;
	}
};

void fn(animal *pAn)
{
	pAn->breathe();
}
void main()
{
	animal *pAn;
	fish fh;
	pAn = &fh;
	fn(pAn);
}
//原程序
//#include <iostream.h>
//class animal
//{
//public:
//	 void eat()
//	 {
//		  cout<<"animal eat"<<endl;
//	 }
//	 void sleep()
//	 {
//		  cout<<"animal sleep"<<endl;
//	 }
//	 virtual void breathe()
//	 {
//		  cout<<"animal breathe"<<endl;
//	 }
//};
//class fish:public animal
//{
//public:
//	 void breathe()
//	 {
//		  cout<<"fish bubble"<<endl;
//	 }
//};
//
//void fn(animal *pAn)
//{
//	 pAn->breathe();
//}
//void main()
//{
//	 animal *pAn;
//	 fish fh;
//	 pAn=&fh;
//	 fn(pAn);
//}