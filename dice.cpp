#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int rolldice(void);
int main()
{
	enum Status{CONTINUE,WON,LOST};
	int sum,mypoint;
	
	Status gameStatus;
	
	srand(time(0));
	sum=rolldice();

	switch(sum)
	{
	case 7:
	case 11:
	gameStatus=WON;
	break;
	case 2:
	case 3:
	case 12: 
	gameStatus=LOST;
	default:
	gameStatus=CONTINUE;
	mypoint=sum;
	cout<<"point is"<<mypoint<<endl;
	break;
}

while(gameStatus==CONTINUE)
{
	sum=rolldice();
	if(sum==mypoint)
	gameStatus=WON;
	else
	if(sum==7)
	gameStatus=LOST;

}

if(gameStatus==WON)
	cout<<"player wins"<<endl;
if(gameStatus==LOST)
	cout<<"player loses"<<endl;
return 0;
}

int rolldice(void)
{
	int die1,die2,worksum;
	die1=1+rand()%6;
	die2=1+rand()%6;
	worksum=die1+die2;
	cout<<"player rolled"<<die1<<"+"<<die2<<"="<<worksum<<endl;

	return worksum;
}



