// get 3 values and return total, medium.

#include <stdio.h>

int main(void){
    double num1, num2, num3;
    double sum, avg;

    printf("Please enter 3 values.... ");
    scanf("%lf %lf %lf",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    avg = sum / 3;

    printf("sum = %.2lf \navg = %.3lf ",sum, avg);

    return 0;
}

/*
Output
$ ./ch03_lab3_medium.exe 
Please enter 3 values.... 10
50
100
sum = 160.00 
avg = 53.333
*/