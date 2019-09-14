#include<iostream>
using namespace std;
//base class
class Vehicle
{
public:
	Vehicle()
{
	cout<<"This is a vehicle"<<endl;
}
};
//second base class
class Fourwheeler:public Vehicle
{
public:
	Fourwheeler()
{
	cout<<"objects with 4 wheeler vehicle"<<endl;
}
};
//subclass derived from 2 basse classes
class Car:public Fourwheeler
{
public: Car()
{
	cout<<"Car has 4 wheels"<<endl;
}
};
int main()
{
//creating object of sub class will invoke the constructor of base classes
	Car obj;
	return 0;
}


