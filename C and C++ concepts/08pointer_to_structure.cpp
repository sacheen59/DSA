#include <iostream>
#include<stdlib.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main() {
    struct Rectangle r = {10,5};
    struct Rectangle *p = &r;
    (*p).length = 30; //another way of accessing element of structure using pointer
    int area = p->length * p->breadth; //accessing element of structure using pointer
    cout<<"The area of rectange is "<<area<<endl;
    
    return 0;
}