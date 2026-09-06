#include <stdio.h>
void main(){
    int num, a, b, c, rev;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    a = num / 100;
    b = (num / 10) % 10;
    c = (num / 1) % 10;

    rev = c * 100 + b * 10 + a;

    if (num == rev){
        printf("Palindrome\n");
    }else{
        printf("Not a Palindrome\n");
    }
}