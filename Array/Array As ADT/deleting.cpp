#include<iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};


void Display(struct Array arr){
    int i;
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }
}

int Delete(struct Array *arr, int index){
    int i;
    if(arr->length < arr->size || index < arr->length){
        //copy the value of given index to x
        int x = arr->A[index];
        //shifting element so that the memory space will not leaked
        for(i=index;i<(arr->length - 1);i++){
            arr->A[i] = arr->A[i+1];
        }
        //decreasing the length of an array
        arr->length--;
        return x;
    }
    return 0;
}

int main(){
    struct Array arr;
    arr.size = 10;
    arr.A = new int[arr.size]{1,2,3,4,5,6};
    arr.length = 6;
    int deletedItem = Delete(&arr,4); //3 is index here
    if(deletedItem != 0){
        cout<<"Element before deletting"<<endl;
        Display(arr);
        cout<<"Deleted Item is "<<deletedItem<<endl;
        cout<<"Element after deleting"<<endl;
        Display(arr);
    }else{
        cout<<"The index is greater than the length of an array!"<<endl;
    }
    return 0;
}