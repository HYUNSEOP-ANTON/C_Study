#include <stdio.h>

int main(void)
{
    int ascii;
    printf("ASCII code ? :");
    scanf("%d",&ascii);

    printf("%d is %c",ascii, ascii);
    return 0;
}
/*
$ ./ch04_ex7_ASCII.exe 
ASCII code ? :80
80 is P
*/