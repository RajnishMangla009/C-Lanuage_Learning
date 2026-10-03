#include <stdio.h>

void main(){
    int i, j, n=10;
    
    for(i=1; i<= n ; i++){

        for (j = 0; j < (n+2) ; j++){


            if(i == j || i+j==10){

                printf(" *");

            }else{

                printf("  ");
                
            }

        }

        printf("\n");

    }
}