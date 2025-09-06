// convert mile to meter.
#include <stdio.h>

int main(void)
{
    int mile;
    double meter;

    printf("mile ? : ");
    scanf("%d", &mile);

    meter = mile *1609;

    printf("%d mile is  %.2lf meter", mile,meter);

    return 0;
}

/*
Output
$ ./ch03_ex2_meter_mile.exe 
mile ? : 2
2 mile is  3218.00 meter
*/