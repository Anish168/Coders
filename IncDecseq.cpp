#include <iostream>
using namespace std;

void incSeq(int n)
{
    //base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    incSeq(n - 1);
    cout << n << " ";
    cout<<endl;
}

void decSeq(int n)
{
    //base case
    if (n == 0)
    {
        return;
    }

    // recursive case
    cout << n << " ";
    decSeq(n - 1);
}

int main()
{
    int n;
    cin >> n;
    incSeq(n);
    decSeq(n);
    return 0;
}