#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("enter matrix values");
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
		scanf("%d",&a[i][j]);

	for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
		if(i==j||i+j==2)
			printf("%d ",a[i][j]);
		else 
		printf(" ");
printf("\n");
}
}
