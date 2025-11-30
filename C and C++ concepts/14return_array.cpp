#include<iostream>
using namespace std;

int* returnArray(int n){
    int *p;
    p = new int[n];
    cout<<"Enter the elements: "<<endl;
    for(int i = 0;i<n;i++){
        cin>> p[i];
        cout<<endl;
    }
    return p;
}

int main(){
    int *A;
    A = returnArray(5);
    cout<<"The elements are: "<<endl;
    for(int i = 0; i<5;i++){
        cout<<A[i]<<endl;
    }
    delete [] A; //free the memory allocated to the array
    return 0;
}