#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int swapAlternate(int arr[], int size)
{
    int i= 0;
    while (i + 1 < size)
    {
        swap(arr[i],arr[i+1]);
        i = i + 2;
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

    int size = 6;
    int arr[size] = {11,22,33,44,55,66};
    swapAlternate(arr, size);
    printArray(arr,size);

    return 0;
}