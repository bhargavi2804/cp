using namespace std;
#include<iostream>
#define pi 3.142

class Shape
{
private:int l;
	int b;
	float radius;
public: 
	Shape()
{
	l=1;
	b=1;
	radius=1;
}
	Shape(int l,int b)
{
	cout<<"area of rectangle is"<<l*b<<endl;
}
	Shape(int l)
{
	cout<<"area of square is"<<l*l<<endl;
}
	Shape(float radius)
{
	cout<<"area of circle is"<<pi*radius*radius<<endl;
}
	
};
int main()
{	
	Shape(4);
	Shape(2,3);
	Shape(1.0f);
	return 0;	
}
