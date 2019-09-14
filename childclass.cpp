#include<iostream>
using namespace std;

//base class
class Parent
{
	public:
		int id_p;
};

//sub class inheriting from base class
class Child:public Parent
{
	public:
		int id_c;
};

int main()
{
	Child obj1;
	//an object of class child has
	obj1.id_c=7;
	obj1.id_p=91;
	cout<<"child id is "<<obj1.id_c<<endl;
	cout<<"parent id is "<<obj1.id_p<<endl;

	return 0;
} 
