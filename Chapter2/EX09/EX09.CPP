#include <iostream.h>
class Base
{
public:
	virtual void xfn(int i)
	{
		cout<<"Base::xfn(int i)"<<endl;
	}

	void yfn(float f)
	{
		cout<<"Base::yfn(float f)"<<endl;
	}

	void zfn()
	{
		cout<<"Base::zfn()"<<endl;
	}
};

class Derived : public Base
{
public:
	void xfn(int i)	//�����˻����xfn����
	{
		cout<<"Drived::xfn(int i)"<<endl;
	}

	void yfn(int c)	//�����˻����yfn����
	{
		cout<<"Drived::yfn(int c)"<<endl;
	}

	void zfn()		//�����˻����zfn����
	{
		cout<<"Drived::zfn()"<<endl;
	}
};


void main()
{
	Derived d;

	Base *pB=&d;
	Derived *pD=&d;
	
	pB->xfn(5);
	pD->xfn(5);

	pB->yfn(3.14f);
	pD->yfn(3.14f);

	pB->zfn();
	pD->zfn();
}