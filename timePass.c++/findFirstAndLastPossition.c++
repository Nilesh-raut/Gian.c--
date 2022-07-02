#include <iostream>
using namespace std;

int leftOccurenceInArray(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int rightOccurenceInArray(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int size = 6;
    int arr[size] = {0, 5, 5, 6, 6, 6};
    int key = 0;

    int left = leftOccurenceInArray(arr, size, key);
    int right = rightOccurenceInArray(arr, size, key);
    cout <<"The first left elment is at "<< leftOccurenceInArray(arr, size, key)<<endl;
    cout << "The first right elment is at "<<rightOccurenceInArray(arr, size, key)<<endl;
    cout<<"The total num of occurence is "<<right-left+1<<endl;
    return 0;
}