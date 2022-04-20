#include <iostream>
using namespace std;

bool is7present(int arr[], int n)
{
    //base case
    if (n == 0)
    {
        return false;
    }

    //recursive case
    if (arr[0] == 7)
    {
        return true;
    }

    /*          1st way

    if (is7present(arr+1,n-1)==true)
    {
        return true;
    }
    else
    {
        return false;
    }
*/

    //      2nd way

    return is7present(arr + 1, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(int);
    if (is7present(arr, n))
    {
        cout << "Yes, it's present";
    }
    else
    {
        cout << "No, it's not present";
    }

    return 0;
}