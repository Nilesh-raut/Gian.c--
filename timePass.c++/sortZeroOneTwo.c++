#include <iostream>
using namespace std;

int sortZeroOneTwo(int arr[], int size)
{
    int left = 0, right = size - 1, mid = 0;

    while (mid <= right)
    {
        if (arr[mid] == 0)
        {
            swap(arr[left], arr[mid]);
            left++, mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

void printArray(int arr[], int size)
{
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }
}

int main()
{

    int size = 6;
    int arr[size] = {0, 1, 2, 2, 1, 0};
    sortZeroOneTwo(arr, size);
    printArray(arr,size);


    return 0;
}