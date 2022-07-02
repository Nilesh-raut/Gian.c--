#include <iostream>
using namespace std;

int findSquareRootOfNum(int n)
{

    int s = 0, e = n, mid;
    int ans = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        long long square = mid * mid;

        if (square > n)
        {
            e=mid-1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "enter the num for squareRoot" << endl;
    cin >> n;
    cout << findSquareRootOfNum(n);

    return 0;
}