#include <iostream>
#include<stdlib.h>
using namespace std;


int main() {
//   accessing the heap memory using pointer
    int *p;
    // p = (int *)malloc(5*sizeof(int)); //in c
    p = new int[5]; // in c++
    p[0] = 1; p[1] = 2;p[2] = 3; p[3] = 4;p[4] = 5;
    cout<<"The elemets are: "<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    return 0;
}