#include <stdio.h>

int main(void)
{
    int decimal;
    printf("input decimal : ");
    scanf("%d", &decimal);

    printf("%d is %08x in hexadecimal\n",decimal,decimal);
    printf("%d is %o in octal\n",decimal,decimal);

    return 0;
}
/*
Output
$ ./ch04_ex2_decimal.exe
input decimal : 255
255 is 000000ff in hexadecimal
255 is 377 in octal
*/