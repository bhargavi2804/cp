#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc,char *argv[])
{
//ensure that the user  enters 2 cmd line parameters
if(argc!=3){
	printf("invalid no. of arguments.\nenter source file nmae n thn destination filename.");
	exit(1);
}
	char buff[1024];
//create target file descriptor in read write mode
	int destfd=open(argv[2],O_CREAT|O_RDWR|O_TRUNC,00600);//file opened in write mode
	if(destfd<0){perror("open dest");exit(1);}

//open source file descriptor in read mode

	int srcfd=open(argv[1],O_RDONLY);//file opened in read mode
	if(srcfd<0){perror("open src");exit(1);}
	int n;
//read the src file n write in the dest file

	for(;;)
	{
		n=read(srcfd,buff,1024);
		if(n<=0)
		{
			close(srcfd);
			close(destfd);
			return 0;
		}
		write(destfd,buff,n);
	}
	return 0;
}
