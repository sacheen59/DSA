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


int main(){
    int A[] = {10,20,3,5, 30};
    // creating the Node
    create(A, 5);
    // sum of all data in node
    int total = sumOfData(first);
    cout<<"The sum of all data is: "<<total<<endl;
}



