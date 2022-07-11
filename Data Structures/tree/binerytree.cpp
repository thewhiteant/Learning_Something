#include<iostream>
using namespace std;
class node{

public:
int data;
node* left;
node* right;

node(int d){
    data = d;
}

};


int main(){
 node* root  = new node(1);
 root -> left = new node(2);
 root -> right = new node(3);
 root -> left -> left = new node(4);
 root -> left -> right= new node(5);


cout<<root->left->data<<endl;



    return 0;
}