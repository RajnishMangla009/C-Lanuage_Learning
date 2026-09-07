#include <stdio.h>

int main(){

    int sub, n = 1;
    float marks, sum, avg;
    
    printf("Enter the number of Subjects: ");
    scanf("%d", &sub);

    while(n <= sub){
        printf("Enter marks of subject %d: ", n);
        scanf("%f", & marks);
        sum = sum + marks;
        n++;
    }

    printf("Total Marks = %.2f\n", sum);

    avg = sum/sub;

    printf("Average = %.2f\n", avg);

    if(avg >= 50){
        printf("Student is Pass");
    }else{
        printf("Student is Fail");
    }

    return 0;
}