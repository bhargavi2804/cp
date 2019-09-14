#include<iostream>
using namespace std;
static int x=1;
class createanddestroy{
	public: createanddestroy()
	{
		cout<<x<<endl;
		x++;
	}
	~createanddestroy()
	{
		
		
		x--;
		cout<<x<<endl;
	}
};

int main()
{
	createanddestroy obj[5];
	return 0;	
}


using namespace std;
#include<iostream>
static int x=0;
class A{
public: A()
{
++x;	
cout<<x<<endl;

}
~A()
{

cout<<"Destructor called"<<endl<<x*x<<endl;
x--;	
}
};

int main()
{
A obj1[5];
