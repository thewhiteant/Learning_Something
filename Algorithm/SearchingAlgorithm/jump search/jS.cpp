#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>


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


using namespace std;
int main(){



    int ok[5] = {55,1,5,678,7};


    cout<<jumpS(ok,7,5)<<endl;



return 0;
}