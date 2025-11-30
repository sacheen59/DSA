#include <iostream>
#include<stdlib.h>
using namespace std;


int main() {
    // example of reference
    int a = 10;
    int &r = a;
    cout<<"a is "<<a<<endl;
    cout<<"r is "<<r<<endl;
    r++;
    cout<<"a is "<<a<<endl;
    cout<<"r is "<<r<<endl;
    return 0;
}