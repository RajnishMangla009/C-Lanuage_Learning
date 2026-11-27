// Type def is used to give a short name to a variable 
// Instead of calling the variable with its complete name, the user can call it with its short name, wherever required

#include <stdio.h>

typedef struct user{
    int id;
    char name[20];
}U;

void main(){
    U s1 = {101, "Ram"};
    printf("User id is = %d, and Name is %s", s1.id, s1.name);
}