// 8 2
// 0 0 1 1 2 2 2 2

// the ans is = 4 7

#include <iostream>
using namespace std;

int leftMostOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
            // return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }

    return ans;
}

int rightMostOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid, ans = -1;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;

            // return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main()
{

    int size = 6;
    int arr[size] = {0, 5, 5, 6, 6, 6};
    int key = 5;
    // cout << "enter the value of key" << endl;
    // cin >> key;

    cout << endl;
    cout << "The leftmost occurence is " << leftMostOccurence(arr, size, key);
    cout << endl;
    cout << "The rightmost occurence is " << rightMostOccurence(arr, size, key)<<endl;
    
    // int totalNumOfOccurence=leftMostOccurence(arr, size, key)-rightMostOccurence(arr, size, key)+1;
    int l=leftMostOccurence(arr, size, key);
    int r=rightMostOccurence(arr, size, key);

    int totalNumOfOccurence = (r-l)+1;


    cout<<"The total num of occurence "<<totalNumOfOccurence;


    return 0;
}