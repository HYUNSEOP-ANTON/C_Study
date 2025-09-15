// 1 pyeong (Korean area unit) is around 3.3m^2.

#include <stdio.h>
#define CHAGNE_RATE 3.3

int main(void)
{
    int pyeong;
    double meters;

    printf("pyeong ? : ");
    scanf("%d",&pyeong);

    meters = pyeong * CHAGNE_RATE;

    printf("%d pyeong is around %.5lf meter square",pyeong,meters);
    return 0;
}
/*
Output
$ ./ch04_ex5_change_unit.exe
pyeong ? : 31
31 pyeong is around 102.30000 meter square
*/