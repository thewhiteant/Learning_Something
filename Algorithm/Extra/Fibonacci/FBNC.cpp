#include<iostream>
using namespace std;

int fiv(int n){

    if(n<=1){
        cout<<n;
    }else{

        int first = 0;
        int second = 1;
        for (int i = 2; i <=n; i++)
        {
            int fn = first + second;
            second = first ;
            first = fn;
            cout<<fn<<" ";

        }
        

    }


    return 0;
}


int main(){

    int n;
    cin>>n;
    fiv(n);



    return 0;
}