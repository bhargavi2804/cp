void main()
{

char * name1="ranjith";
char name2[]="kumar";
char a[]="world";
int i,j;
printf("%s\n",name1);
printf("%s\n",name2);
printf("%c\n",name1[2]);
printf("%c\n",name2[4]);
printf("%c\n",name1[2]+1);
printf("%c\n",name2[4]+1);
printf("%s\n",name1+(name1[1]+1)-name2[3]);
printf("%s\n",name1+1);
printf("%s\n",name2+1);
printf("%c\n",name1[2]-32);

for(int i=0;name1[i]!='\0';i++)
{

printf("%c",name1[i]-32);
}
printf("\n");
name2[3]='\0';
printf("%s\n",name2);

for(i=0,j=5;i<j;a[i++]=a[j--])
{
printf("%s\n",a);
}
printf("after swap%s",a);

}


