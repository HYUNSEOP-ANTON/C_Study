// demonstrating overflow.

#include <stdio.h>
#include <limits.h> //this is header file where the limits of Integer are written

int main(void)
{
    short s_money = SHRT_MAX;
    unsigned u_money = USHRT_MAX;

    printf("before : %d\n",s_money);
    s_money = s_money + 1;
    printf("after : %d\n",s_money);

    printf("before : %u\n",u_money);
    u_money = s_money + 1;
    printf("after : %u\n",u_money);

    return 0;
}

/*
Output
before : 32767
after : -32768
before : 65535
after : 4294934529
*/