// currency exchange program

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){

    double rate;
    double usd;
    int krw;

    printf("Current exchange rate ? : ");
    scanf("%lf", &rate);

    printf("How much KRW? :" );
    scanf("%d",&krw);

    usd = krw / rate ;
    printf("%d KRW => %lf USD ", krw, usd);

    return 0;
}
/*
Output
$ ./ch03_lab2_exchange.exe
Current exchange rate ? : 1420
How much KRW? :1000000
1000000 KRW => 704.225352 USD 
*/