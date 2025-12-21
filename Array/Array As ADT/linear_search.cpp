#include<iostream>
using namespace std;

struct Array{
    int A[10];
    int size;
    int length;
};


int LinearSearch(struct Array arr, int key){
  int i;
  for(i = 0; i< arr.length; i++){
      if(arr.A[i] == key){
          return i;
      }
  }
  return -1;
}


int main(){
    struct Array arr = {{8,9,4,7,6,3,10,5,14,2},10,10};
    
    int index = LinearSearch(arr,10);
    
    if(index == -1){
        cout<<"The element doesnot lies in the given array.";
    }
    else{
        cout<<"The element lies in index "<<index<<endl;
    }
    
    return 0;
}