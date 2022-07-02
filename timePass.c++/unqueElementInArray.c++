#include <iostream>
using namespace std;

int unqueElementInArray(int arr[], int size)
{

    int i = 0, ans = 0;
    while (i < size)
    {
        ans = ans ^ arr[i];
        i++;
    }
    return ans;
}

int main()
{

    int size = 5;
    int arr[size] = {2, 4, 7, 2, 7};
    cout<<unqueElementInArray(arr, size);
    

    return 0;
}