#include <stdio.h>

void main(){
    int a = 1, b, c;

    while (a <= 7){
        b = 1;
        while(b <=3){
            printf("%d", b);
            b++;
        }
        a++;
        printf("\n");
    }
}