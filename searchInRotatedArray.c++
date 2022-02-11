#include <iostream>
using namespace std;

// void printArray(int array[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
// }

int findPivotInArray(int arr[], int size)
{
    int s = 0, e = size - 1, mid;
    while (s < e)
    {
        mid = (s + e) / 2;
        if (arr[0] < arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return e;
}


// int binarySearch(int arr[], int size,int key,int start,int end)
// {
//     int mid;
//     while (start<=end)
//     {   
//         mid=(start+end)/2;

//         if (arr[mid]==key)
//         {
//            return mid;
//         }
//         if(arr[mid]<key){
//             start = mid+1;
//         }
//         if (arr[mid]>key)
//         {
//             end=mid-1;
//         }
        
        
//     }
    
//     return -1;
// }


int searchInArray(int arr[],int size,int key){

    // printArray(arr,size);
    // int pivot=findPivotInArray(arr,size);
    cout<<findPivotInArray(arr,size);
    // if(key<arr[pivot-1]){
    //     return binarySearch(arr,size,key,0,pivot-1);
    // }
    // else{
    //     return binarySearch(arr,size,key,pivot,size-1);
    // }

}



int main()
{
    int size =5;
    int arr[size]={7,9,1,2,3};
    // int key =2;
    cout<<searchInArray(arr,size,key);
    return 0;
}