#include <stdio.h>

int main(void)
{
    double kgs;
    double velocity;
    double j;

    printf("kgs ? : ");
    scanf("%lf",&kgs);
    printf("Velocity ? : ");
    scanf("%lf",&velocity);

    j = 0.5 * kgs * velocity * velocity;
    printf("Energy : %.5lf",j);
    return 0;
}
/*
$ ./ch04_ex6_kinetic_energy.exe 
kgs ? : 105
Velocity ? : 15.3
Energy : 12289.72500
*/