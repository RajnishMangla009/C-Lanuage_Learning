#include <stdio.h>

void main(){
    int x = 10;
    int *ptr = &x;
    printf("%d\n", x);
    printf("%u\n", ptr);

    *ptr = 20;
    printf("\n%d\n", x);

    *ptr = *ptr * 2;
    printf("%d\n", x);
}


// Pass by Reference on passBy_Reference.c
