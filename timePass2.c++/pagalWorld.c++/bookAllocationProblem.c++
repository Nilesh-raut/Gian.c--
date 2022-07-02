#include <iostream>
using namespace std;

bool IsPossibleSolution(int arr[], int size, int mid, int k)
{

    int pageSum = 0, studentCount = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] + pageSum <= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > k || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBook(int arr[], int size, int k)
{
    int start = 40, end = 100, mid, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (IsPossibleSolution(arr, size, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{

    int size = 5;
    int arr[size] = {10, 20, 30, 40,50};
    int k = 2;
    cout<<allocateBook(arr, size, k);

    return 0;
}