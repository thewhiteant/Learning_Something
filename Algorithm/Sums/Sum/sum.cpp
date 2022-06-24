#include<iostream>

using namespace std;
 
int sum(int a[],int n){

     int s = 0;
     for (int i = 0; i < n; i++)
     {
        s += a[i];
     }
     return s;
     


}


int main(int argc, char const *argv[])
{
    int x[5] = {1,2,3,4,5};
    cout<<sum(x,5)<<endl;
    return 0;
}
