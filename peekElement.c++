#include<iostream>
using namespace std;

void peekElementInMountArray(int arr[],int size){
    int s=0,e=size-1,m;
    while (s<e)
    {
        m=(s+e)/2;
        if (arr[m]<arr[m+1])
        {
            s=m+1;
        }
        else{
            e=m;
        }
    }
    
    cout<< e;

}


int main(){

int size = 5;
int arr[size]={20,30,20,10,5};

// cout<<
peekElementInMountArray(arr,size);
 
return 0;
}