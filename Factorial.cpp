#include <iostream>
using namespace std;

/*
int fact(int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }

    //recursive case
    int chotaans = fact(n - 1);     //pure assumption

    //with the help of above two case find the final result
    int finalans = n * chotaans;

    return finalans;
}

*/

int fact(int n)
{
    //base case
    if (n == 0)
    {
        return 1;
    }

    //recursive case

    return n * fact(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << "factorial of " << n << " is " << fact(n) << endl;
    return 0;
}