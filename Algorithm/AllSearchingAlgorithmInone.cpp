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



 int main(){

    int x[max],n;
    cout<<"Whiteant All Searching Algorithms "<<endl;
    cout<<"Enter Range n:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        x[i] = rand();
        
    }
    print(x,n);

    
    cout<<"Sequential Search"<<endl;
    cout<<"[26500] BS SeqS: "<<seqsearch(x,n,26500)<<endl;
    sort(x, x + n);
    cout<<"[26500] AS SeqS: "<<seqsearch(x,n,26500)<<endl;
    cout<<"\n\n";


    cout<<"Binery Search"<<endl; 
    cout<<"[26500] R_BinS: "<<recbin(x,0,n,26500)<<endl;
    cout<<"[26500] BinS: "<<bineryS(x,n,26500)<<endl;
    
    cout<<"\n\n";
    return 0;
 }