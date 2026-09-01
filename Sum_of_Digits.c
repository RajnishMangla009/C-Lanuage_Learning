#include <stdio.h>
void main(){

    int a, b, c, d, e, num, sum;

    printf("Enter a 5 Digit Number: ");
    scanf("%d",& num);

    a = num/10000;
    b = (num / 1000) % 10;
    c = (num / 100) % 10;
    d = (num / 10) % 10;
    e = (num / 1) % 10;

    sum = a+b+c+d+e;
    printf("Sum of the Digits: %d", sum);

}