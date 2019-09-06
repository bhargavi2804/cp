#include<stdio.h>
void inputa(int x[][10]);
void inputb(int y[][10]);
void mul(int a[][10],int b[][10]);
int i,j,k,l;

void main()
{	
	int a[10][10],b[10][10];
	printf("enter matrix A dimensions A[i*j]");
	scanf("%d%d",&i,&j);
	printf("enter matrix B dimensions B[i*j]");
	scanf("%d%d",&k,&l);
	if(j==k)
	{
	inputa(a);
	inputb(b);
	mul(a,b);	
	}
	else 
	printf("please give valid dimensions");
	
}

void inputa(int x[][10])
{	
	
	for(int n=0;n<i;n++)
		for(int m=0;m<j;m++)
		scanf("%d",&x[n][m]);
}

void inputb(int y[][10])
{
	for(int n=0;n<k;n++)
		for(int m=0;m<l;m++)
		scanf("%d",&y[n][m]);
}
void mul(int a[][10],int b[][10])
{
	int n,m,p;
	int sum[i][l];
	
	for(int n=0;n<=i;n++)
		for(int m=0;m<=l;m++)
		sum[n][m]=0;


	for(n=0;n<i;n++)
	{
		for(m=0;m<l;m++)
			{
			for(p=0;p<j;p++)
			sum[n][m]+=a[n][p]*b[p][m];
			
			printf("%d ",sum[n][m]);
			}
	printf("\n");
	}
}


