#include<iostream>
using namespace std;
class Base
{
public:
	virtual void print()
	{cout<<"print base class"<<endl;}
	void  show()
	{cout<<"show base class"<<endl;}
};

class derived: public Base
{
public:
	void print()
	{cout<<"print derived class"<<endl;}
	void show()
	{cout<<"show derived class"<<endl;}
};
 int main()
{
	Base *bptr;
	derived d;
	bptr=&d;
//virtual func binded at runtime
	bptr->print(); //runtime polymorphism
//Non-virtual function, binded at comppile time
	bptr->show(); //static polymorphism
}  
	
