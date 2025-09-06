// calculate gravity in Moon, input is kg in Earth.

#include <stdio.h>
int main(void){
    double weight;
    double mWeight;

    printf("your weight ? : ");
    scanf("%lf",&weight);

    mWeight = 0.17 * weight;

    printf("your weight in Moon : %.2lf",mWeight);
    return 0;
}
/*
Output
$ ./ch03_ex6_gravity.exe
your weight ? : 100
your weight in Moon : 17.00
*/