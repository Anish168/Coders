//                              1st way
/*
#include <iostream>
using namespace std;
void bubblesort(int arr[], int n, int i)
{
    //base case
    if (i == n - 1)
    {
        return;
    }

    //recursive case
    for (int j = 0; j <= n - 2 - i; j++)
    {
        if (arr[j] > arr[j + 1]) //if we compare arr[j] < arr[j+1] then it will print decreasing order but if we compare arr[j] > arr[j+1] then it will print increasing order
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    bubblesort(arr, n, i + 1);
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n, 0);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

//                  Bubble Sort purest form

#include <iostream>
using namespace std;
void bubblesortpure(int arr[], int n, int i, int j)
{
    //base case
    if (i == n - 1)
    {
        return;
    }

    if (j == n - 1 - i)
    {
        bubblesortpure(arr, n, i + 1, 0);
    }
    else
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
        bubblesortpure(arr, n, i, j + 1);
    }

    bubblesortpure(arr, n, i + 1,0);
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    bubblesortpure(arr, n, 0, 0);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}