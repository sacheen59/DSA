#include<iostream>
using namespace std;

//structure of an array 
struct Array {
    int *A;
    int size;
    int length;
};


void Insert(struct Array *arr,int index, int value){
    int i;
    if(arr->length < arr->size && index<arr->length){
       for(i = arr->length;i> index;i--){
        arr->A[i] = arr->A[i-1];
    }
        arr->A[index] = value;
        arr->length++; 
    }
    else{
        cout<<"Given index out of range"<<endl;
    }
}


void Display(struct Array arr){
    int i;
    for(i = 0;i<arr.length; i++){
        cout<<arr.A[i]<<endl;
    }
}


int main(){
    struct Array arr;
    arr.size = 10;
    arr.A = new int[arr.size]{1,2,3,4,5};
    arr.length = 5;
    
    //inserting 40 in third index
    Insert(&arr,3,40);
    
    cout<<"Element after inserting"<<endl;
    Display(arr);
    
}