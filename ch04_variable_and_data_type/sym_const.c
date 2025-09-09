#include <stdio.h>
#define TAX_RATE 0.2 // declare with define.

int main(void)
{
    const int MONTHS = 12; // declare with const.

    int m_salary, y_salary;

    printf("your monthly salary? :");
    scanf("%d", &m_salary);

    y_salary = MONTHS * m_salary;
    printf("your salary in a year : %d\n", y_salary);
    printf("your tax is : %f ", y_salary * TAX_RATE);

    return 0;
}

/*
Output
$ ./sym_const.exe
your monthly salary? :1000
your salary in a year : 12000
your tax is : 2400.000000
*/