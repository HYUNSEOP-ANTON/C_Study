// getting 2 numbers from keyboard and do addition, print the result.
// if you are doing on Windows OS, you must add this line.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void)
{

    int x;
    int y;
    int sum; // declare 3 variables for inputs and result

    printf("first input : "); 
    scanf("%d", &x); // get value from keyboard

    printf("second input : ");
    scanf("%d", &y);

    sum = x + y;
    printf("%d + %d = %d", x,y,sum);

    return 0;
}
/*
Output 

PS C:\Dev\C_Study\Ch03_C_Program_Component> .\simple_print_scanf_ex.exe
first input : 1
second input : 10
1 + 10 = 11

*/