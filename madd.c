#include<stdio.h>
void input(int x[][2]);
int add(int a[][2],int b[][2]);
int i,j;
void main()
{
	
	int a[3][2],b[3][2],i,j;
	
	input(a);
	input(b);
	/*for(i=0;i<3;i++)
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
*/
	
add(a,b);
}

void input(int x[][2])
{
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
		scanf("%d",&x[i][j]);
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
