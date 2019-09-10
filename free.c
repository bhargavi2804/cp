#include<stdio.h>
/*void *rrr;
int main(void)
{
	rrr=strdup("bbb");
	free(rrr);
	rrr=malloc(size)
	return 0;
}*/

void **rrr;
int main(void)
{
	rrr=malloc(sizeof(void **));
	*rrr=strdup("bbb");
	free(rrr);
	return 0;
}
