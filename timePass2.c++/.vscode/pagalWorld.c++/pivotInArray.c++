#include<iostream>
using namespace std;

int findPivotInArray(int arr[],int size){

    int start = 0,end = size-1,mid;

    while (start<end)
    {
        mid = (start+end)/2;
        if (arr[0]<arr[mid])
        {
            start = mid+1;
        }
        else{
            end = mid;
        }
        
    }
    
return end;

}


int main(){
 
int size = 5;
int arr[size]={7,9,1,2,3};

cout<<findPivotInArray(arr,size);
 
return 0;
}