using namespace std;
#include<iostream>
class Date{
public:
	Date(int=1,int=1,int=1990);
	void print();
private:
	int month;
	int day;
	int year;
};

Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}
