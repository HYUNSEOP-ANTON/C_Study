// get input radius from keyboard, and cacluate and print area.
// use float, calculate circumference too.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float radius;
    float area;
    float circumference;

    printf("radius ? : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 3.14 * 2 * radius;
    
    printf("the area of circle : %f\n", area);
    printf("the circumference of circle : %f", circumference);

    return 0;
}

/* 
Output
radius ? : 10
the area of circle : 314.000000
the circumference of circle : 62.799999
*/