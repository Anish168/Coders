#include <iostream>
using namespace std;

int firstIndexof7(int *arr, int n, int i)
{
    //base case
    if (i == n)
    {
        return -1;
    }

    //recursive case
    if (arr[i] == 7)
    {
        return i;
    }
    return firstIndexof7(arr, n, i + 1);
}

int main()
{
    int arr[] = {2, 4, 6, 7, 9};
    int n = sizeof(arr) / sizeof(int);
    int index = firstIndexof7(arr, n, 0);
    if (index == -1)
    {
        cout << "7 is not present";
    }
    else
    {
        cout << "7 is present at index " << index << endl;
    }

    return 0;
}