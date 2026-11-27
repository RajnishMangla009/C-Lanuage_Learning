#include <stdio.h>
#include <string.h>

struct user{
    char name[20];
    int age;
};

void main(){

    /* Ways to print values of Structure */

    // Method - 1
    struct user s1;
    strcpy(s1.name, "Rajnish");
    s1.age = 17;
    printf("Name = %s, Age = %d\n", s1.name, s1.age);

    // Method - 2
    struct user s2 = {"Vidhi", 13};
    printf("Name = %s, Age = %d\n", s2.name, s2.age);
    
}