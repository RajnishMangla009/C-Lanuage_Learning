#include <stdio.h>
void main(){
    float pi = 3.14;
    
    float r = 0;
    printf("Enter Radius Here: \n");
    scanf("%f", &r);

    float area = 2*pi*r;

    printf("%.1f", area) ;
}
