#include <stdio.h>
int main(void)
{
    char code = 'A';

    printf("%d %d %d \n",code,code+1,code+2);
    printf("%c %c %c",code,code+1,code+2);
    
    return 0;
}
/*
Output
$ ./char_integer_operation.exe 
65 66 67 
A B C
*/