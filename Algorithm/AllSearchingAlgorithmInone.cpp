#include <bits/stdc++.h>
#include<cstdlib>
#include<cstring>
#define max 100

using namespace std;

void print(int ar[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}




int seqsearch(int a[],int n,int x){
    while (n--)
    {
        if(a[n]==x){
            return n;
            
        }
        
    }
    return 0;
 
}

int recbin(int a[],int low, int high,int x){
    if(high<low){ return 0;}
    else{
     int mid = (low+high)/2;
     if(a[mid] > x){
            recbin(a,low,mid-1,x);
    }else if(a[mid] < x){
            recbin(a,mid+1,high,x);
    }else if(a[mid]==x){
            return mid;
        }

    }
}

int bineryS(int a[],int n,int x){
    int low = 0;
    int high = n;

    while (low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
        }else if(a[mid] > x){
                high = mid -1 ;
        }else{
            low = mid + 1;
        }
    
    }
    return 0;

}

int jumpS(int arr[], int n, int x)
{
   int step = sqrt(n);
   int prev = 0;
    while (arr[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return 0;
    }

    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return 0;
    }

    if (arr[prev] == x)
        return prev;

    return 0;
}

 int main(){

    int x[max],n;
    cout<<"Whiteant All Searching Algorithms "<<endl;
    cout<<"Enter Range n:";
    cin>>n;
    int sear = 26500;
    for (int i = 0; i < n; i++)
    {
        x[i] = rand();
        
    }
    print(x,n);

    
    cout<<"Sequential Search"<<endl;
    cout<<"[26500] BS SeqS: "<<seqsearch(x,n,sear)<<endl;
    sort(x, x + n);
    cout<<"[26500] AS SeqS: "<<seqsearch(x,n,sear)<<endl;
    cout<<"\n";
    cout<<"Binery Search"<<endl; 
    cout<<"[26500] R_BinS: "<<recbin(x,0,n,sear)<<endl;
    cout<<"[26500] BinS: "<<bineryS(x,n,sear)<<endl;
    cout<<"\n";
    cout << "Jump Search" << endl;
    cout << "[26500] JumpS: " << jumpS(x, n, sear) << endl;
    cout << "\n";
    return 0;
 }