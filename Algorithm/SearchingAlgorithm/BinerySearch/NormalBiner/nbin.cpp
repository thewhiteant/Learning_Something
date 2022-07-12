#include<iostream>
using namespace std;


int binsearc(int a[],int low,int high,int value){

    while (low<=high)
    {
        int mid = (low+high)/2;
        if(value<a[mid]){
                high = mid - 1;
        }else if (value>a[mid])
        {
             low = mid + 1;
        }else{
            return mid;
        }
        
    }
    return 0;


}




int main(int argc, char const *argv[])
{
    int a[10] = {1,4,5,6,7,8,99,152,264,353}; 

    cout<<binsearc(a,0,10,353);
    

    return 0;
}
