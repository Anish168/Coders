#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter how many rows u wanna print ";
    cin >> row;

    // int cosnum = 1;
    int rowno = 1;
    int sp = 1;
    while (rowno <= row)
    {
        if (row % 2 == 0)
        {
            sp = 0;
        }
        else
        {
            sp = 1;
        }

        int cosprint = 1;
        while (cosprint <= row)
        {
            cout << sp << '\t';
            sp = 1 - sp;
        }
        cout << endl;

        // cosnum = cosnum + 1;
    }
    rowno = rowno + 1;

    return 0;
}