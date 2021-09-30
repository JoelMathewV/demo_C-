#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;
};

void print(node* head){
    while(head!=NULL){
        cout<<head->value<< " ";
        head = head->next;
    }
}
int main(){
    node* head = new node();
    node* first = new node();
    node* second = new node();
    head->value = 1;
    head->next = first;
    first->value = 2;
    first->next = second;
    second->value = 3;
    second->next = NULL;

    print(head);
    return 0;
}