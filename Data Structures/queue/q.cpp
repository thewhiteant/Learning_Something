#include<iostream>
using namespace std;

#define max  10

class qu{

    int q[max];
    public:
    int font,count;
     qu(){
       font = 1;
       count = 0;
     }
    bool isEmpty();
    bool isfull();
    int enqueue(int data);
    int dequeue();
    int peek();
    int print();

};

bool qu::isEmpty(){
    if(count<0){
        return true;
    }else{
        return false;
    }
}

bool qu::isfull(){
    if(count > max){
        return true;
    }else{
        return false;
    }


}

int qu::enqueue(int data){
    if(count<=max){

        if(count == 0){
            q[++count] = data;
            font++;

        }else{
            q[++count] = data;

        }

    }else{
        cout<<"Overflow of the queue"<<endl;
    }

return 0;
}

int qu::dequeue(){

    if(count>0){
        if(font<=count){
            font++;
        }else{
            cout<<"Nothing To remove"<<endl;
        }
    
    }else{
        cout<<"Queue is empty";
    }


}
int qu::peek(){


}




int qu::print(){
    cout<<"Font Value: "<<font<<endl;
    cout<<"Count Value: "<<count<<endl;
    cout<<"All Data"<<endl;
    for (int i = font; i <= count; i++)
    {
        cout<<q[i]<<endl;
    }
    

}


int main(){


class qu test;

test.enqueue(1); //font 1
test.enqueue(2);    //2
test.enqueue(3);    //3
test.enqueue(4);    //4
test.enqueue(5);    //5
test.enqueue(6);    //6
test.enqueue(7);    //7
test.enqueue(8); 

test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.print();   



    return 0;
}