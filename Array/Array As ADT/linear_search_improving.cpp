#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};

void Swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// 1. using transposition
int TranspositionLinearSearch(struct Array *arr,int key){
    int i;
    // traverse through all element of an array
    for(i = 0; i < arr->length; i++){
        // check whether the element of given index is equal to key or not
        if(arr->A[i] == key){
        // if the element is not in index 0
          if(i!=0){
            // swap to the previous index
            Swap(arr->A[i],arr->A[i-1]);
            // return the index
            return i-1;
          }
        // element is at index 0
          return 0;
        }
    }
    // the element is not found
    return -1;
}

// 2. using move to head/first
int moveToHeadLinearSearch(struct Array *arr, int key){
    int i;
    // traverse through all element of an array
    for(i = 0; i< arr-> length;i++){
        // check whether the element of given index is equal to key or not
        if(arr-> A[i] == key){
            // if the element is not at index 0
            if(i!=0){
                // swap the key with the first index element
                Swap(&arr->A[i], &arr->A[0]);
            }
            return 0;
        }
    }
}



int main(){
    struct Array arr = {{8,9,4,7,6,3,10,5,14,2},10,10};
    
    int index = TranspositionLinearSearch(&arr,10);
    
    if(index == -1){
        cout<<"The element doesnot lies in the given array.";
    }
    else{
        cout<<"The element lies in index "<<index<<endl;
    }
    
    return 0;
}