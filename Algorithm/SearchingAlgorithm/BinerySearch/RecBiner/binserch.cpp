#include<iostream>
using namespace std;

int recfun(int a[],int i,int l, int x){
    if(i==l){

            if (x=a[i]) return i;
            else return 0; 

    }else{

        int mid = (i+l)/2;
        if(a[mid]  == x){
            return mid;
        }else if(a[mid]>x){
            recfun(a,i,mid-1,x);
        }else{
            recfun(a,mid+1,l,x);
        }


    }



    return 0;

}



int main(int argc, char const *argv[])
{
    int a[10] = {1,4,5,6,7,8,99,152,264,353}; 

    cout<<recfun(a,1,10,100);



    return 0;
}
