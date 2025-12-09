#include<iostream>
using namespace std;

//n = number of disk
// A = first pole
// B = second pole 
// C = third pole

void TowerOfHanoi(int n, int A, int B, int C){
    if(n > 0){
        TowerOfHanoi(n-1,A,C,B);
        cout<< "from "<< A << " to "<< C <<endl;
        TowerOfHanoi(n-1,B,A,C);
    }
}

int main(){
    cout<< "Follow the following steps to solve the problem: "<<endl;
    TowerOfHanoi(3,1,2,3);
    return 0;
}