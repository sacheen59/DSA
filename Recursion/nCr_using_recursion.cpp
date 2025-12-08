#include<iostream>
using namespace std;

// combination using pascal triangle
int C(int n, int r){
    if(r==0 || r == n){
        return 1;
    }
    return C(n-1,r-1) + C(n-1,r);
}

int main(){
    int combination = C(0,0);
    cout<< "combination is "<< combination << endl;
    return 0;
}