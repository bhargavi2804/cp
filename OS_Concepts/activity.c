/*
 * Author: N Bhargavi
 * Date: 19th Sep 2019
 * Description: Application to Kernal Journey
 * */
/*
#include<stdio.h>
void myStrUpper(char* s)
{
	
	while(*s!='\0')
	{
		*s=*s-('a'-'A');
		s++;
	}	
}

int myStrLen(char* s)
{
int count=0;

	while(*s!='\0')
	{
		count++;
		s++;
	}
	return count;
}
//Entry point

int main(int argc,char* argv[])
{
	
	if(argc<2)
	{
		printf("SYNTAX: %s <string>\n",argv[0]);	
		return -1;
	}
	myStrUpper(argv[1]);
	printf("%s [%d]\n",argv[1],myStrLen(argv[1]));
	return 0;
}
*/

#include <stdio.h>
//Function Declaration / Prototype
void myStrUpper(char*);
int myStrLen(char*);

int main(int argc, char* argv[])
{
	if(argc < 2) {
		printf("SYNTAX: %s <string>\n", argv[0]);
		return -1;
	}

	myStrUpper(argv[1]);
	printf("%s [%d]\n", argv[1], myStrLen(argv[1]));
	return 0;
}

int myStrLen(char* s)
{
	int count = 0;
	while(*s != '\0') 
	{
		count++;
		s++;
	}
	return count;
}

void myStrUpper(char* s)
{
	while(*s != '\0')
	{
		*s = *s - ('a' - 'A');
		s++;
	}
}








