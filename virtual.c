
#include<iostream> 
using namespace std; 
   
class Base 
{ 

   int x;
public: 
	virtual void func()=0;
	int getX() {return x}
}; 
   //this classs inherits from base and imple
class Derived: public Base 
{ 
	int y;
public: 
    void fun() { cout<<"fun() called \n"; } 
}; 
   
int main(void) 
{ 
    Derived d; 
    d.func(); 
    return 0; 
}
