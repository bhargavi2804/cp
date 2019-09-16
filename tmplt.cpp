#include<iostream>
using namespace std;

template <typename T>
T mymax(T x,T y)
{
	return (x>y)?x:y;
}

int main()
{
	cout<<mymax<int>(3,9)<<endl;//call mymax for int
	cout<<mymax<double>(3.0,9.0)<<endl;
	cout<<mymax<char>('a','b')<<endl;
}
