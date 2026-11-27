#include <stdio.h>

void num(int *n){
    *n = 20;
}

void main(){
    int x = 10;
    printf("%d \n", x);
    num(&x);
    printf("%d \n", x);

}