#include <stdio.h>

void swap(int a, int b);

int main(){
    int x, y;
    printf("Enter the Value of A & B:\n");
    scanf("%d %d", &x, &y);

    swap(x, y);

    return 0;
}

void swap(int a, int b){
    int c = 0;

    printf("Value before Swap is, A = %d, B = %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("Value after Swap is, A = %d, B = %d\n", a, b);
}