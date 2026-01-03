#include<iostream>
#include<cmath>
using namespace std;

struct Array{
    int A[15];
    int length;
    int size;
};

// to perform binary search the given array must be in sorted form
int BinSearch(struct Array arr, int l, int h, int key){
    while(l <= h){
        int mid = floor((l+h)/2);
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return -1;
}

// using Recursive function
int RBinSearch(struct Array arr, int l, int h, int key){
    if(l <= h){
        int mid = floor((l+h)/2);
        if(key == arr.A[mid]){
            return mid;
        }
        else if(key < arr.A[mid]){
            return RBinSearch(arr, l, mid-1, key);
        }
        else{
           return RBinSearch(arr, mid+1, h, key);
        }
    }
    return -1;
}

int main(){
    struct Array arr = {{4,8,10,15,18,21,24,27,29,33,34,37,39,41,43},15,15};
    // int index = BinSearch(arr, 0, arr.length, 18);
    int index = RBinSearch(arr, 0, arr.length, 34);
    if(index == -1){
        cout<< "Element not found"<<endl;
    }
    else{
        cout<< "The given element found at index "<<index<<endl;
    }
    return 0;
}