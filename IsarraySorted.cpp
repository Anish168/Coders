#include <iostream>
using namespace std;

bool isSorted(int *arr, int n)
{
    //base case
    if (n == 1) //because single element is always sorted
    {
        return true;
    }

    //recursive case
    if (arr[0] <= arr[1] && isSorted(arr + 1, n - 1)) //You can also write like if(arr[0]<=arr[1] && isSorted(arr+1,n-1)==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {2, 34, 100, 78, 90};
    int n = sizeof(arr) / sizeof(int);

    if (isSorted(arr, n))
    {
        cout << "Yes, it's sorted array" << endl;
    }
    else
    {
        cout << "No, it's not sorted array" << endl;
    }

    return 0;
}