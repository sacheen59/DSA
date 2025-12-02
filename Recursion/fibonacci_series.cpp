#include<iostream>
using namespace std;


// using iteration
int fib(int n){
    int t0 = 0, t1 = 1, s = 0, i;
    
    if(n<=1) return n;
    
    for(i= 2; i <= n; i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

// using recursion
int rfib(int n){
    
    if(n<=1) return n;
    
    return fib(n-2) + fib(n-1);
}


int main(){
    // cout<< fib(6) <<endl;
    cout<< rfib(6) <<endl;
    return 0;
}