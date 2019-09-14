#include<iostream>
using namespace std;
class Vehicle
{
public:
	Vehicle()
{
	cout<<"This is a vehicle"<<endl;
}
};
//second base class
class Fourwheeler
{
public:
	Fourwheeler()
{
	cout<<"This is a 4 wheeler vehicle"<<endl;
}
};
//subclass derived from  classes
class Car:public Vehicle,private Fourwheeler
{

};
int main()
{
//creating object of sub class will invoke the constructor of base classes
Car obj;
return 0;
}


