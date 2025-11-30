#include<stdio.h>

int main(){
    int A[5]; //declaration of an array
    int B[5] = {1,2,3,4,5}; //declaration + initialization of array
    int i;
    printf("The elements of array are: ");
    for(i=0;i<5;i++){
        printf("%d\t",B[i]);
    }
    return 0;
}