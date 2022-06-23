#include<iostream>
using namespace std;



#define max  10

class qu{

    int q[max];
    public:
    int font,count;
     qu(){
       font = -1;
       count = -1;
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

    if(font<=(count)){
      font++;   
    }else{
        cout<<"Queue is empty"<<endl;
    }


}
int qu::peek(){

    if(count>0){
        int x = q[font];
        return x;
    }

}




int qu::print(){
    
    if(count>=font){

        for (int i = font; i <= count; i++)
        {
            cout << q[i] << endl;
        }
    }else{
        cout<<"Nothing to print"<<endl;
    }
    cout<<"Font Value: "<<font<<endl;
    cout<<"Count Value: "<<count<<endl;
    cout<<"All Data"<<endl;

    

}



int main(){



class qu test;

test.enqueue(1); 
test.enqueue(2);    
test.enqueue(3);    
test.enqueue(4);    
test.enqueue(5);    

test.dequeue();
test.dequeue();
test.dequeue();



test.print();
    return 0;
}