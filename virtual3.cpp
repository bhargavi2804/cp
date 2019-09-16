#include<iostream> 
#include<cstdio>
using namespace std; 
   
class base 
{ 
public:
base()
{ cout<<"constructing base\n";}
virtual ~base()
{cout<<"destructing base \n";}
};

class derived:public base{
public:
derived()
{cout<<"constructing derived\n";}
~derived()
{cout<<"destructing derived \n";}
};

int main(void)
{
	derived *d=new derived();
	base *b=d;
	delete b;
	getchar();
	return 0;
}
