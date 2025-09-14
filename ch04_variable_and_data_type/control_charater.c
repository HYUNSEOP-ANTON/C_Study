#include <stdio.h>

int main(void)
{
    int id, pass;

    printf("input your id and password as 4 numbers : \n");
    printf("id: ____\b\b\b\b"); // move cursor

    scanf("%d", &id);

    printf("password: ____\b\b\b\b");
    scanf("%d",&pass);

    printf("\a id : \"%d\" \npassword : \"%d\"\n",id,pass);
    return 0;
}
/*
Output
input your id and password as 4 numbers : 
id: 1234
password: 5678
 id : "1234" 
password : "5678"
*/