#include <iostream>
using namespace std;
int binarySearch(int arr[], int size,int key)
{
    int start = 0,end = size - 1,mid;
    while (start<=end)
    {
        mid= (start+end)/2;
       if (arr[mid]==key)
       {
           return mid;
       }
       else if (arr[mid]<key)
       {
          start = mid+1;
       }
       else if(arr[mid]>key)
       {
           end= mid-1;
       }
       
    }
    
}

int main()
{

    int size = 5;
    int arr1[size] = {4, 8, 16, 22, 34};
    int key = 32;
    cout<<binarySearch(arr1, size,key);

    return 0;
}