#include <iostream>
using namespace std;

void pairSum(int arr[], int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+arr[j]==key)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
            
        }
    }
}

int main()
{

    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int key =5;
    pairSum(arr,size,key);

    return 0;
}