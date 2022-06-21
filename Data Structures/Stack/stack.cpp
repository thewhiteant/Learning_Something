#include<iostream>
using namespace std;

#define max 100
class stack{

    int top;

    public:
        int stk[max];
        stack(){ top = - 1; } //constructor ja top define kore dibo

        bool push(int item);    //jodi stack max na hoy taile push korbo naile false return korbo

        int pop();              //jodi khali na thake taile pop korbo uprer item naile 
        bool empty();
        int peek();

};

bool stack::push(int item){

    if(top >= (max-1)){
        return false;
    }else{
        
        stk[++top] = item;
        return true;
    }

}


int stack::pop(){
    
    if(top <  0){
        cout<<"No items to remove";
        return 0;
    }else{
        int x = stk[top--];
        return x;
    }


}

int stack::peek(){
    if(top < 0){
        cout<<"Stack empty";
        return false;

    }else{
        int x = stk[top];
        return x;


    }
    }

bool stack::empty(){
    return (top<0);

}



int main()
{

    class stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout << "Top element is : " << s.peek() << endl;
    cout<<"Elements present in stack : ";
    while(!s.empty())
    {

        cout<<s.peek()<<" ";

        s.pop();
    }
 
    return 0;


}


