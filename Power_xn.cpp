#include <iostream>
using namespace std;

int powerXn(int x, int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }

    //recursive case

    return x * powerXn(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << x << " to the power " << n << " is " << powerXn(x, n) << endl;

    return 0;
}