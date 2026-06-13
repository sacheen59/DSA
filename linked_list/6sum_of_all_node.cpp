#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first = NULL;

void create(int A[], int n){
    int i;
    struct Node *newNode, *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i < n; i++){
        newNode = new struct Node;
        newNode->data = A[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

int sumOfData(struct Node *p){
    int sum = 0;
    while(p != NULL){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int RSumOfData(struct Node *p){
    int sum = 0;
    if(p == NULL){
        return 0;
    }
    else{
        return RSumOfData(p->next) + p->data;
    }
    return sum;
}


int main(){
    int A[] = {10,20,3,5, 40};
    // creating the Node
    create(A, 5);
    // sum of all data in node
    int total = sumOfData(first);
    cout<<"The sum of all data is: "<<total<<endl;

    // sum of all data in linked list using recursion
    int Rtotal = RSumOfData(first);
    cout<<"The sum of all node using recursion is: "<<Rtotal<<endl;
}