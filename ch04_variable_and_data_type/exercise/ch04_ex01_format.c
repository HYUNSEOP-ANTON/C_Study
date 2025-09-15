#include <stdio.h>

int main(void)
{
    double get;
    printf("input floating number : ");
    scanf("%lf",&get);

    printf("%lf\n",get);
    printf("%e",get);
    
    return 0;
}
/*
Output
$ ./ch04_ex1_format.exe
input floating number : 123.456
123.456000
1.234560e+02
*/