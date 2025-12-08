#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0){
        return 0;
    }
    return fact(n-1) * n;
}

int C(int n, int r){
    int t1,t2,t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    
    return t1/(t2*t3);
}

int main(){
    int combination = C(5,5);
    cout<<"combination is "<<endl;
    cout<<combination<<endl;
    return 0;
}