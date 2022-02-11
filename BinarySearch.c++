#include <iostream>
using namespace std;

int binarySearch(int arr[], int size,int key)
{
    int start=0,end=size-1,mid;
    while (start<=end)
    {   
        mid=(start+end)/2;

        if (arr[mid]==key)
        {
           return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        if (arr[mid]>key)
        {
            end=mid-1;
        }
        
        
    }
    
    return -1;
}

int main()
{

    int size = 6;
    int arr[size] = {3, 7, 11, 13, 19, 27};
    int key;
    cout<<"enter the value of key"<<endl;
    cin>>key;

    cout<<binarySearch(arr, size,key);

    return 0;
}