
#include<iostream>

using namespace std;

class node{
public:
    node* prev;
    node* next;
    int data;

};




int main(){
node*prevhead = NULL;
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

one -> prev = NULL;
one -> next = two;
two -> prev = one;
two -> next = three;
three -> prev = two;
three -> next = four;
four -> prev = three;
four -> next = NULL;


head = one;



while(head!=NULL){

    cout <<"font: "<< head ->data <<endl ;
    head = head -> next;
   

}

cout<< four -> prev -> data <<endl;



    return 0;
}