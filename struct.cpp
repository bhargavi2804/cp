using namespace std;
#include<iostream>
struct Time{
	int hour;
	int minute;
	int second;
};

void printmilitary(const Time&);
void printstandard(const Time&);

int main()
{
	Time dinnertime;
	dinnertime.hour=18;	
	dinnertime.minute=30;
	dinnertime.second=0;
	cout<<"dinner will be held at";
	printmilitary(dinnertime);
	//cout<<"standard time"<<endl;
	//printstandard(dinnertime);

	dinnertime.hour=29;
	dinnertime.minute=73;

	cout<<"\n time with invalid values: ";
	printmilitary(dinnertime);
	cout<<endl;
	return 0;
}

void printmilitary(const Time &t)
{

	cout<< (t.hour<10?"0":"")<<t.hour<<":"<<(t.minute<10?"0":"")<<t.minute;

}

/*void printstandard(const time &t)
{
	cout<<( (t.hour==0||t.hour==12)?12:
void */
