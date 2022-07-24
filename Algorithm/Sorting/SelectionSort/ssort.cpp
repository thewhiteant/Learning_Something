#include<iostream>

using namespace std;
int selsort(int a[],int n){
    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int k = i+1; k < n; k++)
        {
            if (a[k]<a[j])
            {
                j=k;
            }
            swap(a[i],a[j]);

        }}}

int main(int argc, char const *argv[])
{
    
int ok[15] = {25,8,6,7,20,100,45,5,364535,854,54,44,4,52,1};

selsort(ok,15);

for (int i = 0; i < 15; i++)
{
    cout<<ok[i]<<" ";
}

    return 0;
}
