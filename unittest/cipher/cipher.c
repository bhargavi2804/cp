#include <cheat.h>
#include <cheat.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

CHEAT_DECLARE(
	
	
/*char* cipher(char c[])
{
	int i=0;
	//char c[]="berry";
	while(c[i]!='\0')
{
	c[i]=c[i]+1;
	i++;
}
	//ch=(char*)c;
	return(c);
}*/

char* cipher(char c[])
{
	char c[5];	
	int i=0;
	
	while(c[i]!='\0')
{
	c[i]=c[i]+1;
	i++;
}
	//ch=(char*)c;
	return(c);
}

)

CHEAT_TEST(next,
cheat_assert(cipher("ber")=="cfs");
cheat_assert_not(cipher("ber")=="chd");
)

CHEAT_TEST(next1,
cheat_assert(cipher("nan")=="obo");
cheat_assert_not(cipher("nan")=="obp");
)

//CHEAT_TEST(next2,
//cheat_assert('x'=='z');
//cheat_assert_not('a'=='c');
//)





