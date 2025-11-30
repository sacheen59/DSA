#include<iostream>
using namespace std;


int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1) * n;
}

int main(){
    int result = fact(5);
    cout<<"The factorial of 5 is "<<result<<endl;
    return 0;
}