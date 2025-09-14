#include <stdio.h>

int main(void){

    float x = 1.234567890123456789;
    double y = 1.234567890123456789;

    printf("size of float = %d\n",sizeof(float));
    printf("size of double = %d\n",sizeof(double));

    printf("x = %30.25f\n",x);
    printf("y = %30.25f\n",y);
    return 0;
}

/*Output
$ ./floating.exe
size of float = 4
size of double = 8
x =    1.2345678806304931640625000
y =    1.2345678901234566904321355
*/