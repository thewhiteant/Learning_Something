#include<iostream>
using namespace std;


void perm(int a[],int k,int n){

if (k==n)
{

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<",";
    }


}else{
    for (int i = k; i < n; i++)
    {
        cout<<a[i]<<",";
    }


}

for (int i = k; i < n; i++)
{
    swap(a[k],a[i]);
    perm(a,k+1,n);
    swap(a[k],a[i]);

}

  

}


int main(int argc, char const *argv[])
{

int sq[5] = {1,2,3,4,5};
perm(sq,5,5);
      






    return 0;
}
