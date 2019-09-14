#include<iostream>
static int x;
using namespace std;
class Num{ 
	public: Num()
	{
		cout<<x<<endl;
		x++;
	}	
};

int main()
{
	Num obj[100];
	return 0;	
}
