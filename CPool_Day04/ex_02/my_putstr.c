#include "stdio.h"
int my_strlen ( char const * str );
int my_putstr(char const *str)
{
	return write(1,str,my_strlen(str));;
}


int main(void)
{
    //task2
    printf("\ntask2: \n");
    char str[]="abcdef";
    my_putstr(str);

    
    return 0;
}
