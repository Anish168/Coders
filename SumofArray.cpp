//                                  1st approach

#include <iostream>
using namespace std;
/*
int sumOfarray(int *arr, int n)
{
    //base case
    if (n == 1)
    {
        return arr[0];
    }

    //recursive case
    return arr[0] + sumOfarray(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 4, 4, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << "Sum is " << sumOfarray(arr, n) << endl;
    return 0;
}
*/
//                                  2nd approach
int sumOfarray(int *arr, int n)
{
    //base case
    if (n == 1)
    {
        return arr[0];
    }

    //recursive case
    return sumOfarray(arr, n - 1) + arr[n - 1];
}

int main()
{
    int arr[] = {1, 4, 4, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    cout << "Sum is " << sumOfarray(arr, n) << endl;
    return 0;
}