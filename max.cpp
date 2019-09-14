#include<iostream>
using namespace std;

int maximum(int,int,int);
int main()
{
	int a,b,c;
	cout<<"enter 3 integer:";
	cin>>a>>b>>c;
	cout<<"maximum is:"<<maximum(a,b,c)<<endl;

	

}

/*int maximum(int x,int y,int z)
{
	int max=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;	
	return max;
}*/
 int maximum(int x,int y,int z)
{
	int max=(((x>y)?x:y)>z)?((x>y)?x:y):z;
	return max;

}	
