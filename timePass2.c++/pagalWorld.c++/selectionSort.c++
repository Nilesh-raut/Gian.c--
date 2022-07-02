#include <iostream>
using namespace std;

int selectionSort(int array[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                swap(array[i], array[j]);
            }
        }
    }
}

int main()
{
    int array[9] = {56, 1, 7, 9, 2, 3, 0, 5, 8};
                    i    j
    selectionSort(array, 9);

    for (int i = 0; i < 9; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}