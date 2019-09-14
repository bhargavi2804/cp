using namespace std;
#include<iostream>

class Player
{
private: int runs;
	 int wickets;

public:
	Player(int r,int w) {runs=r;wickets=w; }
	Player(const Player &p,int w=0){runs=p2.runs;wickets=w;}

	int getruns()	{return runs;}
	int getwickets()	{return wickets;}

};
	

int main()
{
	Point p1(60,5);
	Point p2=p1;
	cout<<"p1.runs="<<p1.getruns()<<",p1.wickets="<<p1.getwickets();
	cout<<"\np2.runs="<<p2.getruns()<<",p2.wickets="<<p2.getwickets();

	return 0;
	
}

/*#include<iostream>
using namespace std;
class player
{
private:
	int runs,wickets;
public:
	player(int r,int w)
{
	runs=r;
	wickets=w;
}
	player(const player &p2,int w=0)
{
	runs=p2.runs;
	wickets=w;
}

	int getruns()
{
	return runs;
}
	int getwickets()
{
	return wickets;
}
};

int main()
{
	player p1(100,2);
	player p2=p1;
	cout<<"player1 runs:"<<p1.getruns()<<"\t wickets:"<<p1.getwickets()<<endl;
	cout<<"player2 runs:"<<p2.getruns()<<"\t wickets:"<<p2.getwickets()<<endl;


}
*/



