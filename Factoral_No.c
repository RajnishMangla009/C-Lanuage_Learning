#include <stdio.h>
void main(){

    int num, facto = 1;

    printf("Enter the Number: ");
    scanf("%d", &num);

    int m = num;

    while(m > 0){
        facto = facto * m;
        m--;
    }

    printf("Factoral of %d is %d", num, facto);
}