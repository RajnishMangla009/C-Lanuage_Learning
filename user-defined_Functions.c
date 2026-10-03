#include <stdio.h>


// function declaration
int sum(int a, int b);

void main(){

    // Function call
    printf("%d", sum(2,3));
}

//Function implementation
int sum(int a, int b){
    return a+b;
}

