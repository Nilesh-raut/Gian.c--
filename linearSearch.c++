#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{

    bool found = 0;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            found++;
        }
    }
    return found;
}

int main()
{
    // cout<<"hi";

    int size = 5;
    int arr[size] = {12, 24, 36, 48, 60};

    int key;
    cout << "enter the value of key" << endl;
    cin >> key;

    int Ans =linearSearch(arr, size, key);
    if (Ans == 1)
    {
        cout<<"Found"<<endl;
    }
    else
    {
       cout<<"Not Found"<<endl;
    }

    
    return 0;
}