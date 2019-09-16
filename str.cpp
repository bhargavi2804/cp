/*
//mine
#include<iostream>
using namespace std;
class Str
{
private:
	string str1;
	
public:
	Str(string s1=" "){str1=s1;}

Str operator +(Str const &obj)
{
	Str res;
	res.str1=str1+obj.str1;
	return res;
}


void print(){cout<<str1<<endl;}
};

int main()
{
	Str st1("hi ");
	Str st2("hello");
	Str st3=s1+s2;
	st3.print;
}

#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Str
{
private:
char s[100];
public:
Str(char s[])
{
strcpy(this->s,s);
}
Str(){}
Str operator +(Str const &o)
{
Str res;
strcat(this->s,o.s);
strcat(res.s,this->s);
return res;
}
void print()
{
cout<<s<<endl;
}
};
int main()
{
Str c1("hi"),c2("hello"),c3;
c3=c1+c2;
c3.print();
}

*/
using namespace std;
#include<iostream>
class Str{
private: string str1;
public: Str(string st){ str1=st;}
Str operator + (Str const &obj) {

str1.append(obj.str1);

return str1;

}
void print() {cout<<str1<<endl;}
};

int main()
{
Str s1("Hello! ");
Str s2("How are you?");
Str r=s1+s2;
r.print();
return 0;
}



	


