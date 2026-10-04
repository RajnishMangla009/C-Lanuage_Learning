// Recursion is to execute a user defined function repeatedly untill a specific condition is satisfied.

// Example of a basic Recursion Function:- 

#include <stdio.h>

void printHello(int n);

void main(){
    printHello(5);
}

// Recursive Call
void printHello(int n){

    //Base Case
    if (n == 0){
        return;
    }

    printf("Hello! \n"); //Statement
    printHello(n-1); //Recursive Call
}