// input height and base, return area

#include <stdio.h>
int main(void){
    double height, base;

    printf("height and base ? : ");
    scanf("%lf %lf",&height,&base);

    double area = height * base / 2;
    printf("area is %.2lf",area);

    return 0;
}
/*
$ ./ch03_ex3_triangle.exe 
height and base ? : 10 2.5
area is 12.50
*/