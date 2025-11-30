#include <iostream>
using namespace std;


int main() {
    // example of pointer
    int a = 10;
    int *p;
    p = &a;
    cout<< "The value of a is: " << a<<endl;
    cout<< "The address of a is: "<<&a<<endl;
    cout<< "The value of pointer p is: "<< *p<<endl;
    cout<< "The value stored by pointer p is: "<<p<<endl;
    return 0;
}