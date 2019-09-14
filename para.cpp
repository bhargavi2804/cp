using namespace std;
#include<iostream>

class Point{
private: 
	int x,y;
public:
	Point(int x1,int y1)
	{
		x=x1;
		y=y1;
	}
	
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
		}
	};

int main()
{
	//constructor called
	Point p1(10,15);
	//access values assigned by cc
	cout<<"p1.x="<<p1.getX()<<endl;
	return 0;
}
