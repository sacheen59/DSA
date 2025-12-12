#include<iostream>
using namespace std;

int main(){
    // declaring and initializing 2D array
    // method 1
    int A[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    // method 2 => using array of integer pointer
    int *B[3];
    B[0] = new int[4]{1,2,3,4};
    B[1] = new int[4]{5,6,7,8};
    B[2] = new int[4]{7,8,9,10};

    // method 3 => using double pointer

    int **C;
    C = new int*[3];
    C[0] = new int[4]{1,2,3,4};
    C[1] = new int[4]{5,6,7,8};
    C[2] = new int[4]{9,10,11,12};

    // accessing the element of 2D array

    for(int i = 0; i<5; i++){
        for(int j = 0; j<i; j++){
            cout<<A[i][j]<<endl;
        }
    }
    

    return 0;
}