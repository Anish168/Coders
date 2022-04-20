#include <iostream>
using namespace std;
void mergeTwosorted(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    int temp[1000];

    while (i < m && j < n)
    {
        if (arr1[i] > arr2[j])
        {
            temp[k] = arr2[j];
            j++;
            k++;
        }
        else
        {
            temp[k] = arr1[i];
            k++;
            i++;
        }
    }

    // uska mtlb jo arr1 hai wo bachi huvi hai
    while (i < m)
    {
        temp[k] = arr1[i];
        k++;
        i++;
    }
    // uska mtlb jo arr2 hai wo bachi huvi hai
    while (j < n)
    {
        temp[k] = arr2[j];
        k++;
        j++;
    }

    cout << "sorted merged array is : " << endl;

    for (int l = 0; l < k; l++)
    {
        cout << temp[l] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {2, 34, 54, 12, 56};
    int arr2[] = {34, 45, 57};
    // int m = sizeof(arr1) / sizeof(int);
    // int n = sizeof(arr2) / sizeof(int);
    int m=5;
    int n=3;
    mergeTwosorted(arr1, arr2, m, n);
    return 0;
}