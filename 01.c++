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

int binarySearch(int arr[], int key, int start, int end)
{
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }

    return -1;
}

int searchInArray(int arr[], int size, int key)
{

    int pivot = findPivotInArray(arr, size);
    if (key >= arr[pivot] && arr[size - 1] >= key)
    {
        return binarySearch(arr, key, pivot, size - 1);
    }
    else if (key >= arr[0] && key <= arr[pivot - 1])
    {
        return binarySearch(arr,key, 0, pivot - 1);
    }
    //  return -1;
}

int main()
{
    int size = 5;
    int arr[size] = {7, 9, 1, 2, 3};
    int key;
    cout << "Enter the value of key" << endl;
    cin >> key;
    int ans = searchInArray(arr, size, key);
    cout << ans;
    return 0;
}