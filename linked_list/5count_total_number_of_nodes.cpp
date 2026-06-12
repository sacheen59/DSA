#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

//creating node from an array
void create(int A[], int n){
    int i;
    struct Node *newNode, *last;
    first = new struct Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i = 1; i<n; i++){
        newNode = new struct Node;
        newNode->data = A[i];
        newNode->next =NULL;
        last->next = newNode;
        last = newNode;
    }

}

// count total number of nodes
int count_total_node(struct Node *p){
    int count = 0;
    while(p != NULL){
        count++;
        p = p->next;
    }
    return count;
}

int main(){
    int A[] = {1,2,3,4,5};
    // creating a linked list
    create(A, 5);
    // counting the total number of nodes
    int total_nodes = count_total_node(first);
    cout<<"Total number of nodes: "<<total_nodes;
    return 0;
}