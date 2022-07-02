#include <iostream>
using namespace std;

int intersectionOfArray(int arr1[], int arr2[], int m, int n)
{
    int i = 0,j= 0;
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i]<<" ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    int m= 6,n=4;
    int arr1[m] = {11,12,16,16,18,19};
    int arr2[n] = {12,16,19,20};
    intersectionOfArray(arr1, arr2, m, n);

    return 0;
}