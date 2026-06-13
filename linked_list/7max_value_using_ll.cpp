// finding the max value in linked list

#include <iostream>
#include <climits>
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

    for(i = 1; i < n; i++){
        newNode = new struct Node;
        newNode->data = A[i];
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

// function to find the maximum value
int max_value(struct Node *p){
    int max = INT_MIN; //min integer value
    while(p != NULL){
        if(p->data > max){
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

// function to find the maximum value using recursion

int maxValueUsingRecursion(struct Node *p){
    int x = 0;
    if(p == NULL){
        return INT_MIN;
    }else{
        x = maxValueUsingRecursion(p->next);
        if(x > p->data){
            return x;
        }
        else{
            return p->data;
        }
    }
}

// clean code of finding maximum value using recursion

int maxValueUsingRecursionOptional(struct Node *p){
    int x = 0;
    if(p == NULL){
        return INT_MIN;
    }
    x = maxValueUsingRecursionOptional(p->next);
    return x > p->data ? x : p->data;
}


int main(){
    int A[] = {1,2,9,4,10};
    // creating a new node
    create(A, 5);
    //finding the max value
    int value = max_value(first);
    cout<<"The max value is: "<<value<<endl;
    // finding the max value
    int rValue = maxValueUsingRecursionOptional(first);
    cout<<"The max value is: "<<rValue<<endl;
    return 0;
}