#include <iostream>
using namespace std;

// prototype/defination/signature of function
int add(int a, int b){
    int c;
    c = a + b;
    return (c);
}

int main() {
    int x,y,z;
    x = 10;
    y = 20;
    z = add(10,20);
    cout<<"Sum is: "<< z<<endl;
    return 0;
}