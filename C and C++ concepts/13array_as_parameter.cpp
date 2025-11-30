// array as a parameter
#include <iostream>
using namespace std;

void display(int A[], int n){
    int i;
    cout<<"The array elements are: "<<endl;
    for(i=0;i<n;i++){
        cout<<A[i]<<endl;
    }
}

int main(){
    int A[5] = {1,2,3,4,5};
    display(A,5);
    return 0;
}