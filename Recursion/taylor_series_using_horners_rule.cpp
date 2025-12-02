#include<iostream>
using namespace std;

double e(double x, double n){
    static double s;
    
    if(n==0){
        return s;
    }
    s = 1 + x*s/n;
    return e(x,n-1);
}

int main(){
    double result = e(1,10);
    cout<< result <<endl;
    return 0;
}