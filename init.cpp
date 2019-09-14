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

//simple date constructor with no range checking
Date::Date(int m,int d,int y)
{
	month=m;
	day=d;
	year=y;
}

void Date::print()
{
	cout<<endl<<day<<"/"<<month<<"/"<<year<<endl;
}

int main()
{	//objects
	Date date1(7,4,1993),date2;

	cout<<"date1=";
	date1.print();
	cout<<"date2=";
	date2.print();
	
	date2=date1;
	cout<<"\n\nafter default memberwise copy, date2"<<endl;
	date2.print();
	cout<<endl;

	return 0;
}
