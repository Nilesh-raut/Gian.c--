#include <iostream>
using namespace std;

int printArr(float arr[], int size)
{
    for (int m = 0; m < size; m++)
    {
        cout << arr[m] << " ";
    }
}

int inverseOfSelectionSort(float arr[], float profit[], float weight[], int size)
{
    // This is reverse of selection sort
    int maxIndex;
    for (int i = 0; i < size; i++)
    {
        maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[maxIndex] < arr[j])
            {
                maxIndex = j;
            }
        }
        swap(arr[maxIndex], arr[i]);
        swap(profit[maxIndex], profit[i]);
        swap(weight[maxIndex], weight[i]);
    }
}

float knapSackProblem(float profit[], float weight[], int maximumWeight, int size)
{

    float ratio[size];
    float TotalProfit = 0;
    float x = 0;
    for (int i = 0; i < size; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    inverseOfSelectionSort(ratio, profit, weight, size);

    for (int i = 0; i < size; i++)
    {
        if (maximumWeight > 0 && weight[i] <= maximumWeight)
        {
            maximumWeight = maximumWeight - weight[i];
            TotalProfit = TotalProfit + profit[i];
        }
        else
        {
            break;
            // int x = maximumWeight / weight[i];
            // TotalProfit = TotalProfit + profit[i]*x;
        }

        // if (maximumWeight > 0)
        // {
        //     int x = maximumWeight / weight[i];
        //     TotalProfit = TotalProfit + profit[i]*x;
        // }
    }

    printArr(profit, size);
    cout << endl;
    printArr(weight, size);
    cout<<endl;
    printArr(ratio, size);
    cout<<endl;
    // printArr(ratio, size);
    return TotalProfit;
}

int main()
{

    int size = 7;
    int maximumWeight = 15;
    float profit[size] = {10,5,15,7,6,18,3};
    float weight[size] = {2,3,5,7,1,4,1};
    cout<<knapSackProblem(profit, weight, maximumWeight, size);

    return 0;
}