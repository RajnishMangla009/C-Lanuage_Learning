#include <stdio.h>

int main(){
    int dec, i = 0;
    int bin[32];

    printf("Enter a Decimal Number");
    scanf("%d", &dec);

    if(dec == 0){
        printf("Binary = 0\n");
    }

    while(dec > 0){
        bin[i] = dec%2;
        dec = dec/2;
        i++;
    }

    printf("Binary =  ");

    for(int j = i-1; j>= 0; j--){
        printf("%d", bin[j]);
    }

    return 0;
}