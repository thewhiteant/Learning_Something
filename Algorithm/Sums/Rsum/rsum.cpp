#include<iostream>

using namespace std;
 
int rsum(int a[],int n){
    if(n<=0) return 0;
    else return (rsum(a,n-1) + a[n-1]);    


}


int main(int argc, char const *argv[])
{
    int x[5] = {1,2,3,4,5};
    cout<<rsum(x,5)<<endl;
    return 0;
}
