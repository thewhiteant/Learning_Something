#include<iostream>
using namespace std;

int  expon(int x,int n){

    int power = 1;
    while (n>0)
    {
        
    while (n%2==0)
    {

    n = n/2;
    x = (x*x);    
        
    }
    n--;
    power = power * x;   
        
    }
    return power;  
}


int main(int argc, char const *argv[])
{
    
cout<<expon(3,2);





    return 0;
}
