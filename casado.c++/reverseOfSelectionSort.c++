#include<iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        cout << arr[m] << " ";
    }
}


int main(){
 
int size = 5;
int arr[size]={64,20,12,22,11};
int maxIndex;
for (int i = 0; i < size; i++)
{
    maxIndex=i;
    for (int j = i+1; j < size; j++)
    {
       if (arr[maxIndex]<arr[j])
       {
           maxIndex=j;
       }
       
    }
    swap(arr[maxIndex],arr[i]);
}

printArr(arr,size);
 
return 0;
}