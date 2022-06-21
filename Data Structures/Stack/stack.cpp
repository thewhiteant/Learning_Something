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
    




}



int main(){




    return 0;
}