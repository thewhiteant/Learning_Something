#include<iostream>
using namespace std;

void toh(int n,int a,int b,int c){
    if(n>=1){
    toh(n-1,a,c,b);
    cout<<"Moves Top Disk To tower "<<a<<" TO the tower "<<b<<endl;
    toh(n-1,c,b,a);

    }


}


int main(int argc, char const *argv[])
{
    
    toh(3,1,2,3);



    return 0;
}
