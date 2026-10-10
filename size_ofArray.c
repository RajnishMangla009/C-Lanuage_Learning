// In C, we have an inbuilt function, named "sizeof", that tells the size of an element of an array or the size of an entire array. The sizeof function can be used like this.
// Using the sizeof function, we can get the total  number of elements in an array. it is useful while using loops with array.  



#include<stdio.h>

void main(){
    int arr[] = {1,2,4,5};
    int total_elements = sizeof(arr);
    int first_element_size = sizeof((arr[0]));

    int no_of_elements = total_elements/first_element_size;

    printf("The total number of elements in the array are: %d", no_of_elements);
    
}