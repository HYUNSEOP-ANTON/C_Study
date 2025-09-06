// conver Fahrenheit to Celsius

#include <stdio.h>
int main (void){

    double fah, cel;

    printf("Enter temperautre in Fahrenheit : ");
    scanf("%lf",&fah);

    cel = 5 / 9 * (fah - 32);

    printf("%lf Fahrenheit is %.2lf in Celsius",fah,cel);

    return 0;
}
/*
Output
$ ./ch03_ex4_temperature.exe
Enter temperautre in Fahrenheit : 32
32.000000 Fahrenheit is 0.00 in Celsius
*/