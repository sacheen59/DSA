// Array is a collection of similar type of data in continuous memory location
#inlcude<iostream>
using namespace std;

int main(){
    // Array Declaration
    int A[5];
    // Array declaration and initialization
    int B[5] = {2,4,6,8,10};

    // accessing array element
    // using index
    cout<<A[2]<<endl;
    cout<<2[A]<<endl;

    //to access all the element we must traverse through an element using index. It can be done using for loop
    for(int i = 0; i< 5; i++){
        cout<<A[i]<<endl;
        cout<<i[A]<<endl;
    }

    // using pointer airthematic
    cout<<*(A + 2) <<endl;
    // similar as A[2] or 2[A]
    return 0;
}