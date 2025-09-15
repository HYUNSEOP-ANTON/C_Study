#include <stdio.h>

int main(void)
{
    double l,w,h;

    printf("length, width, height ?");
    scanf("%lf %lf %lf",&l,&w,&h);

    printf("the volume is %lf",l*w*h);

    return 0;
}
/*
Output
$ ./ch04_ex4_volume.exe 
length, width, height ?30 30 30 
the volume is 27000.000000
*/