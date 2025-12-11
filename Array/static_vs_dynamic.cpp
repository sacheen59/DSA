#include<iostream>
using namespace std;

int main(){
    int A[5]; // this is created in stack and cannot be modified

    int *p; // pointer is defined to access the heap memory but it is created in stack and represent as the name of an array
    p = new int[5]; // (in c++) it is created in heap and can be modified manually
    p = (int*)malloc(5 * sizeof(int)) // in c

    // accesing the element of array created in heap 
    p[1] = 20;
    return 0;
}