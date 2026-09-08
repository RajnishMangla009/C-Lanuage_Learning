#include <stdio.h>
void main(){
    float f, c;

    printf("TEMPERATURE CONVERSION PROGRAM \n");

    printf("Enter Temperature in Farhenheit: ");
    scanf("%f", &f);

    c = (f-32) * 0.556;

    printf("%.2f in celsius is %.2f celcius", f, c);
}