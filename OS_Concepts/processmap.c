/*
 * Author: N Bhargavi
 * Date: 19th Sep 2019
 * Description: Understanding Process Address Space
 * */

#include<stdio.h>

//global variable declaration
int gvar_1;
int gvar_2=10;

static int sgvar_1;
static int sgvar_2=20;

//Entry point

int main(int argc,char* argv[])
{
	int i=0;	
	printf("main:%p\n",main);		//func address
	printf("gvar_2:%p\n",&gvar_2);		//initialized global var
	printf("sgvar_2:%p\n",&sgvar_2);	//initialized global static var
	printf("gvar_1:%p\n",&gvar_1);		//uninitialized global var
	printf("sgvar_1:%p\n",&sgvar_1);	//uninitialized global static var
	printf("i:%p\n",&i);
	return 0;
}

