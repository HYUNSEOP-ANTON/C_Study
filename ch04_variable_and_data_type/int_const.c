#include <stdio.h>

int main() {
    int a = 10;      // decimal
    int b = 012;     // octal (10 in decimal)
    int c = 0xA;     // hexadecimal (10 in decimal)
   
    printf("%d %d %d %d\n", a, b, c);
    return 0;
}
/*
Output
$ ./int_const.exe 
10 10 10 57
*/