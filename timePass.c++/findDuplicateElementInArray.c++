#include <iostream>
using namespace std;

int findDuplicateElementInArray(int arr[], int size)
{
    int ans = 0,num = 1,i=0;

    while (i < size)
    {
        ans = ans ^ arr[i];
        i++;
    }
    while (num<=4)
    {
        ans=ans^num;
        num++;
    }
    return ans;
}

int main()
{

    int size = 5;
    int arr[size] = {2, 1, 2, 3, 4, 2};

    cout<<findDuplicateElementInArray(arr, size);

    return 0;
}