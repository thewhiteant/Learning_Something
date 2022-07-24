#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>


using namespace std;

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


    int s[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    cout <<jumpS(s, 15, 7);
    cout << "\n";


return 0;
}