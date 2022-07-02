#include <iostream>
using namespace std;

int findPivotInArray(int arr[], int size)
{

    int start = 0, end = size - 1, mid;

    while (start < end)
    {
        mid = (start + end) / 2;
        if (arr[0] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return end;
}

int binarySearch(int arr[], int size, int start, int end,int key)
{
    int mid;
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

int searchInRotatedArray(int arr[], int size, int key)
{

    int pivot = findPivotInArray(arr, size);
    // cout<<pivot;

    if (arr[0] <= key)
    {
        cout<<binarySearch(arr,size,0,pivot-1,key);
    }
    else
    {
        cout<<binarySearch(arr,size,pivot,size-1,key);
    }
}

int main()
{

    int size = 5;
    int arr[size] = {7, 9, 1, 2, 3};
    int key = 7;
    searchInRotatedArray(arr, size, key);

    return 0;
}