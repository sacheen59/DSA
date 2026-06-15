#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *newNode, *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 0; i < n; i++){
        newNode = new struct Node;
        newNode->data = A[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

Node* linearSearch(struct Node *p, int key){
    while(p != NULL){
        if(p->data == key){
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int main(){
    struct Node *temp;
    int A[] = {1,2,3,4,5};
    // creating linked list
    create(A, 5);
    // searching in the linked list

    temp = linearSearch(first, 10);
    if(temp == NULL){
        cout<< "Key not found"<<endl;
    }else{
        cout<< "Key found "<<temp->data<<endl;
    }

    return 0;
}