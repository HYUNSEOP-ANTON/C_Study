#include <stdio.h>

int main (void)
{
    char code1 = 'A';
    char code2 = 65;

    printf("code1 = %c\n",code1);
    printf("code2 = %c\n",code2);

     printf("code1 = %d\n",code1);
    printf("code2 = %d\n",code2);

    return 0;
}
/*
Output
$ ./char_var_constant.exe
code1 = A
code2 = A
code1 = 65
code2 = 65
*/