#include <stdio.h>
#include <conio.h>

void main(){
    float pi;
    float r;
    float cir;

    pi = 3.14;
    printf("Enter Radius \n");
    scanf("%f", &r);
    cir = 2*pi*r;
    printf("circumference = %.2f", cir);
}