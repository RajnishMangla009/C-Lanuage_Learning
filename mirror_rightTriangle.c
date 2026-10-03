#include <stdio.h>

void main(){
    int n = 5;
    int a,b;
// Outer loop -> No. of Rows
    for(a = 1; a<= n; a++){
        // 1st inner loop -> no of spaces
        for (b = 1; b<=(n-a); b++){
            printf("  ");
        }

        // 2nd inner loop -> no of columns / stars
        for (b = 1; b<=a; b++){
            printf("* ");
        }
        printf("\n");
    }

}