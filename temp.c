#include <stdio.h>

void main() {

    printf("In");
    int num, rem, quo;

    num = 102;

    for(num; num > 0; ){
        rem = num % 8;
        quo = num / 8;
    }
    printf("%d %d", rem, quo);
    printf("out");
}