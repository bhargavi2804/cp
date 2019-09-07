#include<stdio.h>
#include<stdlib.h>
void game(char a[2][2]);
char a[2][2];
void main()
{
	
	int i,j;
	int k=0;
	
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		a[i][j]='-';

	do
	{
	if(k%2==0)
	{
	printf("first person\n");
	printf("choose a place to enter *\n");
	scanf("%d%d",&i,&j);
	a[i][j]='x';
	}
	else
{
	printf("second person\n");
	printf("choose a place to enter 0\n");
	scanf("%d%d",&i,&j);
	a[i][j]='o';
}
	
	game(a);
	k++;
}while(k<9);

	for(int l=0;l<=2;l++)
{
	for(int m=0;m<=2;m++)
	printf(" %c ",a[l][m]);
	printf("\n");
}

}

void game(char a[2][2])
{
	int flag=0;
	if(a[0][0]==a[1][1]==a[2][2]=='x'||a[0][0]==a[1][1]==a[2][2]=='o')
{
	flag++;
	exit(0);
}
	if(flag==1)
	printf("congtras you win!");
}
