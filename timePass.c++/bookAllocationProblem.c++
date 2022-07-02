// #include <iostream>
using namespace std;
#include <bits/stdc++.h>

int bookAllocationProblem(int arr[], int size)
{
    // int
}

int findMaxNum(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{

    int size = 6;
    int arr[size] = {30, 20, 10, 40, 5, 45};
    // bookAllocationProblem();

    int max = findMaxNum(arr, size);
    cout<< findSumOfArray(arr, size)

    return 0;
}