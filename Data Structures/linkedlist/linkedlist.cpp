#include<iostream>

using namespace std;

class node{
public:
    node* next;
    int data;

};




int main(){

node*head = NULL;
node* one  = NULL;
node* two = NULL;
node* three = NULL;
node* four = NULL;

one = new node();
two = new node();
three = new node();
four = new node();

one -> data = 1;
two -> data = 2;
three -> data = 3;
four -> data = 4;

one -> next = two;
two -> next = three;
three -> next = four;
four -> next = NULL;


head = one;




while(head!=NULL){

    cout << head ->data <<endl ;
    head = head -> next;


}





    return 0;
}