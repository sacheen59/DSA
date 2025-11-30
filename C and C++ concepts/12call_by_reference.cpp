#include <iostream>
using namespace std;

// prototype/defination/signature of function
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x,y;
    x = 10;
    y = 20;
    cout<<"Before swaping: "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    swap(x,y); //call by value
    cout<<"After swaping: "<<endl;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}