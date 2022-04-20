//                               Binary Search without using Recursion means iterative
#include <iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int key)
{
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; //key is not present
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << binarySearch(arr, 0, n - 1, key) << endl;
    return 0;
}