#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{

    int size = 5;
    int arr[size] = {12, 24, 36, 48, 60};
    int key = 36;
    cout<<binarySearch(arr, size, key);

    return 0;
}