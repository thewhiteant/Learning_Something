#include <iostream>
using namespace std;

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

int main(int argc, char const *argv[])
{
    int s[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    cout << "[7] InS: " << inpS(s, 0, 14, 7) << endl;
    cout << "\n";

    return 0;
}
