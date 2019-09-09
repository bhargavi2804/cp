#include<stdio.h>
void copy(char s[],char d[],int n);
void cmp(char s[],int n);
void subs(char s[],int n);
void main()
{
	char s[10],d[10];
	int n;
	printf("enter string\n");
	
	scanf("%s",s);	
	printf("source: %s\n",s);
		
  	n=strlen(s);
	memset(d,'\0',sizeof(d));
	copy(s,d,n);
	cmp(s,n);
	subs(s,n);
}


void copy(char s[],char d[],int n)
{
	
	for(int i=0;i<n;i++)
	d[i]=s[i];
	printf("dest: %s\n",d);
	
}

	
void cmp(char s[],int n)
{
	int m,flag=0;
	char c[10];
	printf("enter string\n");
	scanf("%s",c);	
	m=strlen(c);
	for(int i=0;i<n;i++)
	if(c[i]==s[i])
	flag++;	
	if(flag==n)
	printf("strings are equal");
	else
	printf("strings are not equal");	
	
}

void subs(char s[],int n)
{
	int l,flag=0,i,j,k;
	char ss[10];
	printf("\nenter  substring");
	scanf("%s",ss);	
	for(i=0;i<l;i++)
	if(ss[0]==s[i])
	n=i;
	
	for(j=0,k=n;j<l,k<l;j++,k++)
{
	if(ss[j]==s[k])
	flag++;
	else
{
	printf("not a substring");
	
}
}
if(flag==strlen(ss))
for(int p=n;p<l;p++)
printf("%c",s[p]);
		
}
