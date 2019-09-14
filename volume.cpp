/*#include<iostream>
using namespace std;

int boxVolume(int length=1,int width=1,int height=1);

int main()
{
	cout<<"the default box volume is:"<<boxVolume()<<"\n\nThe volume with 		length10,\n"<<"width 1 and height 1 is :"<<boxVolume(10)<<"\n\n the 		volume of a box with length 10,\n"<<"width 5 and height 1 is:"
	<<boxVolume(10,5)<<"\n\nthe volume of box with length 10,\n";
}
*/
#include<iostream>
using namespace std;
int boxVolume(int length=1,int width=1,int height=1);
int main()
{
cout<<"Default: "<<boxVolume()<<endl
<<"Length 10: Width 1 Height 1 "<<boxVolume(10)<<endl
<<"Length 10: Width 5 Height 1 "<<boxVolume(10,5)<<endl
<<"Length 10: Width 5 Height 2 "<<boxVolume(10,5,2)<<endl;
}
int boxVolume(int length,int width,int height)
{
return length*width*height;
}

