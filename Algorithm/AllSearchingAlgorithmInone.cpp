#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
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




int recbin(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  

        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return recbin(arr, l, mid - 1, x);
        return recbin(arr, mid + 1, r, x);
    }

    return 0;
}

int bineryS(int a[],int low,int n,int x){
    
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

int inpS(int arr[], int lo, int hi, int x)
{
    int pos;
    

    if (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {

        pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            return inpS(arr, pos + 1, hi, x);
        if (arr[pos] > x)
            return inpS(arr, lo, pos - 1, x);
    }
    return 0;
}

int expS(int a[],int n,int x){

    if(a[0]==x) return 0;

    int i = 0;
    while (i<n && a[i]<=x)
    {
        i = i*2;
        return bineryS(a,(i/2),(n-1),x);
    }
    
 return 0;


}

int fib(int a[],int n,int x){
    int off;
    int one = 0;
    int two = 1;
    int fn = one  + two;

    while (fn<n)
    {
        one = two;
        two = fn;
        fn = one + two;
         off = -1;

    }
    while (fn>1)
    {
        int i = min(off+fn,n-1);
        if (a[i]<x)
        {
            fn = one;
            one = two;
            two = fn + one;
           int off = i;
        }else if(a[i]>x){
            fn = two;
            one = one - two;
            two = fn - one;
        }else {
            return i;
        }
        
    }
    
    




}

int jumpS(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); 

   while(a[m] <= item && m < n) { 
  
      i = m;  
      m += sqrt(n);
      if(m > n - 1)  
         return 0; 
   }

   for(int x = i; x<m; x++) { 
      if(a[x] == item)
         return x; 
   }
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
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<" ";
    }
    

    
    cout<<"Sequential Search"<<endl;
    cout<<"[26500] BS SeqS: "<<seqsearch(x,n,sear)<<endl;
    sort(x, x + n);
    cout<<"[26500] AS SeqS: "<<seqsearch(x,n,sear)<<endl;
    cout<<"\n";
    cout<<"Binery Search"<<endl; 
<<<<<<< Updated upstream
    cout<<"[26500] R_BinS: "<<recbin(x,0,n,sear)<<endl;
    cout<<"[26500] BinS: "<<bineryS(x,0,n,sear)<<endl;
    cout<<"\n";
    cout << "Jump Search" << endl;
    cout << "[26500] JumpS: " << jumpS(x, n, sear) << endl;
    cout << "\n";
    cout << "Interpolation Search" << endl;
    int s[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    print(s,15);
    cout << "[7] InS: " << inpS(s,0, 14, 7) << endl;
    cout << "\n";
    cout << "Exponential Search" << endl;
    cout << "[26500] ExpS: " << expS(x, n, sear) << endl;
    cout << "\n";
    cout << "Fibbonacci Search" << endl;
    cout << "[26500] FibS: " << fib(x, n, sear) << endl;
    cout << "\n";

=======
    cout<<"[26500] R_BinS: "<<recbin(x,0,n,26500)<<endl;
    cout<<"[26500] BinS: "<<bineryS(x,n,26500)<<endl;
    
    cout<<"\n\n";
 
 
    cout<<"Jump Search"<<endl; 
    cout<<"[26500] JumpS: "<<jumpS(x,n,26500)<<endl;
    cout<<"\n\n";
 
 
 

 
 
 
>>>>>>> Stashed changes
    return 0;
 
 
 
 
 }