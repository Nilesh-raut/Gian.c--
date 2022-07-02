#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        cout << arr[m] << " ";
    }
}

int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
          int L = 0;
        for (int R = 1; R < size - i; R++)
        {
            if (arr[L] > arr[R])
            {
                swap(arr[L], arr[R]);
            }
            L++;
        }
    }
}

int main()
{
    int size = 5;
    int arr[size] = {5,3,8,4,6};

    bubbleSort(arr, size);

    printArr(arr,size);


    return 0;
}
