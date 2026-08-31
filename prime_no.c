#include <stdio.h>
void main(){

    int x, num, is_prime = 1;

    printf("Enter a Number: ");
    scanf("%d", & num);

    for (x = 2; x < num ; x++){
        if(num % x == 0){
            is_prime = 0;
            break;
        }
    }

    if(is_prime == 0){
        printf("Not a Prime Number \n");
    }else {
        printf("Prime Number \n");
    }



}