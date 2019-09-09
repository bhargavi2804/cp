#include<stdio.h>

void main()
{
	char *name[]={"ravi","ravindra","ravin"};
	printf("%s\n",*name+1);
	printf("%s\n",*name+2);
	printf("%s\n",*(name+1));
	printf("%s\n",*(name+2));
}
