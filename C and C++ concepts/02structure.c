#include<stdio.h>

//defination of structure
struct Rectangle{
    int length;
    int breadth;
};

int main(){
    // struct Rectangle r; //declaration of structure.
    struct Rectangle r = {10,5}; //declaration and initialization of structure.
    // accessing the structure member we wil use dot(.) operator
    printf("The length of rectangle is: %d\n",r.length);
    
    printf("The area of rectangle is: %d",r.length * r.breadth);
    return 0;
}