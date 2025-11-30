// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Information{
    string name;
    string address;
    int age;
};

int main() {
    struct Information info = {"Sachin Barali","Bharatpur",22};
    cout<<"The name of person is: "<<info.name<<endl;
    cout<<"The address of person is: "<<info.address<<endl;
    cout<<"The age of person is: "<<info.age<<endl;
    return 0;
}