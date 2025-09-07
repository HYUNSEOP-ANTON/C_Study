// Usage of sizeof function

#include <stdio.h>

int main(void)
{
    int x;

    printf("size of variable x : %d\n", sizeof(x));

    printf("char = %d\n",sizeof(char)); //it can be data type too.
    printf("int = %d\n",sizeof(int));
    printf("short = %d\n",sizeof(short));
    printf("long = %d\n",sizeof(long));
    printf("long long = %d\n",sizeof(long long));
    printf("float = %d\n",sizeof(float));
    printf("double = %d\n",sizeof(double));

    return 0;
}

/*Output
$ ./sizeof.exe
size of variable x : 4
char = 1
int = 4
short = 2
long = 4
long long = 8
float = 4
double = 8
*/