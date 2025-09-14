#include <stdio.h>

int main(void)
{
    float x = 1e39; // overflow
    printf("x = %g\n", x);

    float y = 1.23456e-46; //underflow
    printf("y = %g\n",y);

    return 0;
}

/*
Output
$ ./overflow_underflow_float.exe 
x = inf
y = 0
*/