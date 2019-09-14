using namespace std;
#include<iostream>
static int count=-1;

class Batsmen
{
	private: int runs;
	public: 
	Batsmen()
	{
		count++;
	}
	//void score();
	void ipl();
	void icc();
	void wc();
	void odi();

};

void Batsmen::ipl()
{
	Batsmen ipl[2];

}

void Batsmen::icc()
{
	Batsmen icc[3];

}

void Batsmen::wc()
{
	Batsmen wc[5];

}

void Batsmen::odi()
{
	Batsmen odi[11];

}
int main()
{
	Batsmen b;
	b.ipl();
	b.icc();
	b.wc();
	b.odi();
	cout<<"count is"<<count;
}

using namespace std;
#include<iostream>

static int count=-1;

class Batsmen
{
int runs;
public: 
Batsmen()
{
count++;
}
void score();
void ipl();
void icc();
void wc();
void odi();
};


void Batsmen::score()
{
ipl();
icc();
wc();
odi();
}

void Batsmen::ipl()
{
Batsmen b1;
Batsmen b2;
}

void Batsmen::icc()
{
Batsmen bat[3];

}
void Batsmen::wc()
{
Batsmen obj[5];
}

void Batsmen::odi()
{
Batsmen odi[11];
}

int main()
{
Batsmen batsman;
batsman.score();
cout<<"Total number of objects: "<<count<<endl;
}


