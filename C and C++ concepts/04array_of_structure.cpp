#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    struct Rectangle r[5] = {{10,20}, {30,40},{50,60},{70,80},{90,100}};
    int i;
    for(i=0;i<5;i++){
        cout<<"The area of rectangle "<< i<< " is " << r[i].length * r[i].breadth <<endl;
    }
    return 0;
}