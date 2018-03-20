

#include <stdio.h>

int my_strcmp(char const *s1 , char const *s2)
{
    while(*s1!='\0'){
        if(*s1!=*s2){
            return -1;
        }
        else{
            s1++;
            s2++;
        }
    }
    return  0;
}


void my_putchar(char *s)
{
    write(1, s, strlen(s));
}




int main(int argc, const char * argv[]) {
    
    //task5
    char a[10]="abc";
    char b[10]="abc";
    int ee=my_strcmp(a, b);
    printf("%d\n", ee);
    

    return 0;
}
