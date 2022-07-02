#include <iostream>
using namespace std;

int findSquareRoot(int num)
{
    int start = 0, end = num, mid, square, ans = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        square = mid * mid;
        if (square > num)
        {
            end = mid - 1;
        }
        else if (square < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (square == num)
        {
            return mid;
        }
    }
    return ans;
}

int main()
{

    int num = 50;

    cout<<findSquareRoot(num);

    return 0;
}