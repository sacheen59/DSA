#include<iostream>
using namespace std;

// structure of an array
struct Array{
    int *A;
    int size;
    int length;
};

//function to display an array
void Display(struct Array arr){
    int i;
    for(i = 0; i< arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}

// function to add or append the value inside array
void Append(struct Array arr,int x){
    arr.A[arr.length] = x;
    arr.length++;
}

int main(){
    
    struct Array arr;
    cout<<"Enter the size of an array: "<<endl;
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    
    int i,n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    
    for(i = 0; i< n;i++){
        cin>>arr.A[i];
    }
    arr.length = n;
    
    cout<<"Array before inserting"<<endl;
    Display(arr);
    
    int x;
    cout<<"Enter your value to insert: ";
    cin>>x;
    Append(arr,x);
    
    cout<<"Array after inserting"<<endl;
    Display(arr);
    
    return 0;
}