#include <iostream>
using namespace std;

int binsearc(int a[], int low, int high, int value)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (value < a[mid])
        {
            high = mid - 1;
        }
        else if (value > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return 0;
}

int expS(int a[], int n, int x)
{

    if (a[0] == x)
        return 0;

    int i = 0;
    while (i < n && a[i] <= x)
    {
        i = i * 2;
        return binsearc(a, (i / 2), (n - 1), x);
    }

    return 0;
}
int main(int argc, char const *argv[])
{
    int a[10] = {1, 4, 5, 6, 7, 8, 99, 152, 264, 353};
    cout << "Exponential Search" << endl;
    cout << "[26500] ExpS: " << expS(a, 10, 99) << endl;
    cout << "\n";

    return 0;
}
