#include <iostream>
using namespace std;

int printArr(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
}

int selectionSort(int arr[], int size)
{

    int minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;

        for (int j = i+1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{

    int size = 4;
    int arr[size] = {5, 3, 2, 9};


    printArr(arr, size);
    cout<<endl;
    selectionSort(arr, size);

    printArr(arr, size);

    return 0;
}