#include<stdio.h>

int add(int a[][2],int b[][2]);
void main()
{
	
	int a[3][2],b[3][2],i,j;
	
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		scanf("%d",&b[i][j]);
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)		
		printf("%d  ",a[i][j]);
	
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)		
		printf("%d  ",b[i][j]);
	
	printf("\n");
	}
add(a,b);
}

int add(int a[][2],int b[][2])
{
for(int i=0;i<3;i++)
{
	for(int j=0;j<2;j++)		
		printf("%d  ",a[i][j]+b[i][j]);
	
	printf("\n");
}


}
