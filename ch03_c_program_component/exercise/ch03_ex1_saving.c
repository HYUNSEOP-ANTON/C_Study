// set a saving goal, get salary and return expected year.

#include <stdio.h>

int main(void){

    double goal, year, salary;

    printf("What is your goal ? (million) :");
    scanf("%lf", &goal);

    printf("How much you earn in a year ? (million) :");
    scanf("%lf", &salary);

    year = goal / salary;

    printf("To save %.2lf millions, it takes %.2lf years.",goal, year);

    return 0;
}
/*
Output
$ ./ch03_ex1_saving.exe 
What is your goal ? (million) :10
How much you earn in a year ? (million) :0.5
To save 10.00 millions, it takes 20.00 years.
*/