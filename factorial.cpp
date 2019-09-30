#include "functions.h"

int factorial(int n)
{
	int t=1;
	if(n==0)
	return 1;
	else
	for(int i=1;i<=n;i++)
		t=i*t;
	return t;
}
