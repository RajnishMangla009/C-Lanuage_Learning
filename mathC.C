#include <stdio.h>
#include <math.h>

int main(){

    int a = 3;
    int b = 2;

    // Power (3^2 = 9)
    
    int x = pow(a,b);
    printf("%d ^ %d is %d \n", a, b, x);
    


    // Square Root
    int no = 8;
    int y = sqrt(no);
    printf("Squareroot of %d is %d \n",no, y);

    // Floor, Ceil & Round

    printf("FLoor = %.2f\n", floor((8.4)));
    printf("Ceil = %.2f\n", (ceil(8.9)));
    printf("Round = %.2f\n", (round(8.2)));
    printf("Round = %.2f\n", (round(8.5)));

   return 0;
}