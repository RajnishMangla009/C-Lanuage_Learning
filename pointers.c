#include <stdio.h>

void main(){
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr; //Double Pointer, This variable stores the address of ptr variable, which is already a pointer

    printf("%d\n", a);
    printf("%p\n", ptr); // Prints the address in hexadecimal form
    printf("%u\n", ptr); // Prints the address in Decimal form
    printf("%u\n", dptr); 

    printf("%u\n", *ptr); // Prints the value of Variable A (Dereference)
    printf("%u\n", *dptr);
    printf("%u\n", **dptr);
}
