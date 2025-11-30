#include<iostream>
using namespace std;

// sum of first n natural number

int sum(int n){
    if(n <= 0){
        return 0;
    }
    return sum(n-1) + n;
}

int main(){
    int result = sum(7);
    cout<< result << endl;
    return 0;
}