#include <iostream>
using namespace std;

void findTripletOfSum(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int size = 6;
    int arr[size] = {1, 2, 3, 1, 1, 3};
    int x = 6;
    findTripletOfSum(arr, size, x);
    return 0;
}