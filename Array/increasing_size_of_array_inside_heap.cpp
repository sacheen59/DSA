#include<iostream>
using namespace std;

int main(){
    int *p = new int[5]{1,2,3,4,5};
    // define new array in heap of some size 
    int *q = new int[10];
    //traverse through the array of pointer p and copy the element to q
    for(int i = 0; i<5; i++){
        q[i] = p[i];
    }
    // delete array of p from memory
    delete []p;
    // point p to the q
    p = q;
    // set the value of q to NULL
    q = NULL;
    return 0;
}