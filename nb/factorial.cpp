#include "functions.h"

int factorial(int n)
{
	int t=1;
	for(int i=1;i<=n;i++)
	{
		t=i*t;
	}
	return t;
}
