#include <iostream>
using namespace std;

int findPivotInArray(int arr[], int size)
{
    int s = 0, e = size - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (arr[0] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}

int main()
{

    int size=5;
    int arr[size] = {7, 9, 1, 2, 3};
    

    cout<<findPivotInArray(arr, size);
    return 0;
}