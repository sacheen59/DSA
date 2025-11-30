#include <iostream>
using namespace std;

// prototype/defination/signature of function
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"x = "<<a<<endl;
    cout<<"y = "<<b<<endl;
}

int main() {
    int x,y;
    x = 10;
    y = 20;
    cout<<"Before swaping: "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"After swaping: "<<endl;
    swap(x,y); //call by value
    return 0;
}