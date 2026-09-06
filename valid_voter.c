#include <stdio.h>
void main(){
    int age;
    char name[50];

    printf("Enter your Name: ");
    scanf("%s", &name);
    
    printf("Enter your Age: ");
    scanf("%d", &age);
    
    if (age >= 18){
        printf("Hello %s, You are eligible to Vote!!", name);
    }else{
        printf("Hello %s, You will be eligible to vote after %d year(s)", name, 18-age);
    }
}