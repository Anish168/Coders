#include <iostream>
using namespace std;

int MultiplyusingRecursion(int a, int b)
{
    //base case
    if (a == 0 || b == 0)
    {
        return 0;
    }

    //recursive case
    return a + MultiplyusingRecursion(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << MultiplyusingRecursion(a, b) << endl;
    return 0;
}