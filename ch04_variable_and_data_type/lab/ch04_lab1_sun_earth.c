// calculate ETA of sun lay.

#include <stdio.h>

int main(void)
{
    double light_speed = 300000;
    double distance = 149600000;

    double time;
    time = distance / light_speed;

    printf("%0.2lf \n",time);

    int min = time / 60;
    double second =time - min * 60;
    printf("%d : %0.2lf",min,second);
    return 0;
}
/*
Output
$ ./sun_earth.exe
498.67 
8 : 18.67
*/