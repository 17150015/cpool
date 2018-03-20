#include <stdio.h>
#include <unistd.h>
#include <string.h>

int my_putnbr_base ( int nbr , char const *base )
{
    if(nbr<0)
    {
        printf("-");
        nbr=-nbr;
    }
    int b=strlen(base);
    int c=nbr/b,r=nbr%b;
    if(c==0)
    {
        printf("%c", base[r]);
        return 0;
    }
    else
    {
        my_putnbr_base(c, base);
        printf("%c", base[r]);
    }
    return 0;
}


int main()
{
    int a=-675432;
    char *base="0123456789ABCDEF";
    my_putnbr_base(a, base);
    printf("\n");
  
}
