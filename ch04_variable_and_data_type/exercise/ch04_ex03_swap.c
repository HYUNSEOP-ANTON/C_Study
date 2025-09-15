// To swap the value
#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n",x,y);
    printf("swap\n");

    // To swap the value, empty variable is required.
    int z = x;
    x = y;
    y = z;

    printf("x = %d, y = %d",x,y);
    return 0;
}
/*
x = 10, y = 20
swap
x = 20, y = 10
*/