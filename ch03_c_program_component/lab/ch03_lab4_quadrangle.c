// calculate perimeter and area

#include <stdio.h>

int main(void)
{
    double w, h, area, perimeter;

    printf("enter width : ");
    scanf("%lf", &w);

    printf("enter height : ");
    scanf("%lf", &h);

    area = w * h;
    perimeter = 2*w + 2*h; // 2 * (w+h) also can work

    printf("The perimeter is %.2lf\n",perimeter);
    printf("The area is %lf",area);

    return 0;
}

/*
Output
$ ./ch03_lab4_quadrangle.exe
enter width : 13.5
enter height : 10
The perimeter is 47.00
The area is 135.000000
*/