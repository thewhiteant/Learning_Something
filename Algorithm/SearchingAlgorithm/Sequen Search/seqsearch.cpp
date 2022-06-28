#include<iostream>
using namespace std;


int seqs(int a[],int x,int n){

        a[0] = x;
        while(a[n]!=x){
            n--;

        }
        return n;

        
}

int main(){



    int ok[5] = {55,1,5,678,7};


    cout<<seqs(ok,7,5)<<endl;




    return 0;
}
