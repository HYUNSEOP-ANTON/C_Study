// write polynomial 3x^2 + 7x + 11, get x from keyboard

#include <stdio.h>
int main(void){

    double x;
    double y;

    printf("x ? : ");
    scanf("%lf",&x);

    y = 3 * x * x + 7 * x + 11; 

    printf("y = %.2lf",y);
    return 0;
}
/*
Output
$ ./ch03_ex5_polynomial.exe
x ? : 2 
y = 37.00
*/