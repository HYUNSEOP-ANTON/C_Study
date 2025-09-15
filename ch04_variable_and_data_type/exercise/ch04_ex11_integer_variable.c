#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("input positive integer (0 - 127)  :" );
    scanf("%d",&number1);

    printf("%d is %02x hexadecimal\n",number1,number1);
    printf("%d is %03o octal\n",number1,number1);

    printf("input negative integer (-128 - -1): ");
    scanf("%d",&number2);

    printf("%d is %02x hexadecimal\n",number2,number2);
    printf("%d is %03o octal\n",number2,number2);

    printf("Is complement right ?");

    return 0;
}