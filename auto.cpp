#include<iostream>
using namespace std;


int main()
{
//declare a generalized lambda and store it in sum
	auto sum=[](auto a,auto b){
	return a+b;
};

	cout<<sum(1,6)<<endl;
	cout<<sum(2.0,3.0)<<endl;
	cout<<sum(string("geeks"),string("hello"))<<endl;
	return 0;
}
