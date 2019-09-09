#include<stdio.h>
void main()
{
	struct employee
	{
	char name[10];
	int age;
	float salary;
	long long int num;
	};
	struct employee s1;
	printf("enter your name");
	scanf("%s",&s1.name);
	printf("enter your age");
	scanf("%d",&s1.age);
	printf("enter your salary");
	scanf("%f",&s1.salary);
	printf("enter your num");
	scanf("%lld",&s1.num);
	
	printf("name: %s",s1.name);
	printf("age: %d",s1.age);
	printf("salary: %f",s1.salary);
	printf("num: %lld",s1.num);
}
