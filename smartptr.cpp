#include<iostream>
using namespace std;

class Smartptr
{
	int *ptr;//actual ptr
public:
//for use of explicit keyword
	explicit Smartptr(int *p=NULL) {ptr=p;}

//destructor
	~Smartptr(){cout<<"\ndestructor called"; delete(ptr);}

//overloading dereferencing operator
int &operator *() {return *ptr;}
};


int main()
{
	Smartptr ptr(new int());
	*ptr=20;
	cout<<*ptr;
	//we dnt need to call delete ptr:when obj ptr goes out scope destruction for it is ..
	return 0;
}
