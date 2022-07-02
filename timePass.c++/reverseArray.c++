#include <iostream>
using namespace std;

int reverseTheArray(int arr[], int size)
{

    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++,end--;
    }
}


void printArray(int arr[],int size){
    int i = 0;
    while (i<size)
    {
      cout<<arr[i]<<" ";
      i++;
    }
}


int main()
{

    int size = 5;
    int arr[5] = {12, 24, 36, 48, 60};
    reverseTheArray(arr, size);
    printArray(arr,size);

    return 0;
}