#include <stdio.h>

void main(){
    int i, j, n = 5;
    
    for(i=1; i<=5; i++){

        for (j = 0; j < 2*n; j++){


            if(i == j || i+j==10){

                printf(" * ");

            }else{

                printf("  ");
                
            }

        }

        printf("\n");

    }
}