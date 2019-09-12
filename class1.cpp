#include<iostream>

using namespace std;
class Employee
{	
private:
	string name;
	int ecode;
	float bsalary;
	float sales;
public:
	Employee();
	void setValue(string,int,float,float);
	float hra(float);
	float bs(float,float,float);
	float sale(float,float);
};


Employee::Employee()
{
	name="vijay";
	ecode=0000;
	bsalary=0.0;
	sales=0;
}

void Employee::setValue(string n,int id,float bsal,float sale)
{
	name=n;
	ecode=id;
	bsalary=bsal;
	sales=sale;
}

float Employee::hra(float bsal)
{
	float h;
	h=0.3*bsal;
	return h;
}

float Employee::bs(float bsal,float h,float ctc)
{
	
	if(h+bsal>500000)
	ctc=ctc+100000;
	return ctc;
}

float Employee::sale(float sale,float ctc1)
{
	if(sale>2000000)
	ctc1=ctc1+0.1*sale;
	return ctc1;
}

int main()
{
	Employee e;
	float ctc,h,bs,sl,ctc1,ctc2;
	string nam;
	int eid;
	cout<<"enter name";
	cin>>nam;
	
	cout<<"enter employee code";
	cin>>eid;
	
	cout<<"enter basic salary";
	cin>>bs;

	cout<<"enter sales";
	cin>>sl;
	
	e.setValue(nam,eid,bs,sl);

	h=e.hra(bs);
	cout<<bs<<"is basic salary"<<endl;
	cout<<h<<"is hra"<<endl;
	
	ctc=bs+h;

	cout<<ctc<<"is initial ctc"<<endl;
	
	ctc1=e.bs(bs,h,ctc);
	cout<<"ctc is equal to"<<ctc1<<endl;
	 
	ctc2=e.sale(sl,ctc1);
	cout<<"ctc is equal to"<<ctc2<<endl;
}
