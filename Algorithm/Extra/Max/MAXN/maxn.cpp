#include<iostream>

using namespace std;
   
int maxo(int ar[],int n){

      int temp = ar[0];
      for (int i = 0; i < n; i++)
      {
              if(temp < ar[i] ){
        temp = ar[i];
      }}     
return temp; 

}

int mino(int ar[],int n){

      int temp = ar[0];
      for (int i = 0; i < n; i++)
      {
              if(temp > ar[i] ){
        temp = ar[i];
      }}     
return temp; 

}

char maxoc(int ar[],int n){

      int temp = ar[0];
      for (int i = 0; i < n; i++)
      {
              if(temp < ar[i] ){
        temp = ar[i];
      }}     
return temp; 

}

int main(){

int k[5] = {100,12,45,450,52};


cout<<maxo(k,5)<<endl;
cout<<mino(k,5)<<endl;





    return 0;
}