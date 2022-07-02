#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(int arr[], int size, int mid, int student)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] + pageSum <= mid)
        {
            pageSum = pageSum + arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > student || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateTheBook(int arr[], int size, int min, int max)
{
    int start = min, end = max, mid, ans = -1;
    int students =5;

    while (start <= end)
    {
        mid = (start+end)/2;
        if (isPossibleSolution(arr, size, mid, students))
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

int findMaxOfArray(int arr[], int size)
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

int findSumOfArray(int arr[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int size = 6;
    int arr[size] = {30, 20, 10, 40, 5, 45};
    int min = findMaxOfArray(arr, size);
    int max = findSumOfArray(arr, size);


    cout<<"The ans is "<<allocateTheBook(arr, size, min, max);

    return 0;
}