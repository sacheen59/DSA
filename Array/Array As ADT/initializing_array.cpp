#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    cout<<"Numbers are: "<<endl;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int main(){
    struct Array arr;
    int n,i;
    cout<<"Enter the size of an array: "<<endl;
    cin>>arr.size;
    
    arr.A = new int[arr.size];
    arr.length = 0;
    
    // entering data to the array
    cout<<"Enter the number of element: ";
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>arr.A[i];
    }
    arr.length = n;
    
    Display(arr);
    return 0;
}