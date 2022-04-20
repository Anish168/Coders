#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        //spaces

        int spaces = 1;
        while (spaces <= n - row)
        {
            cout << " ";
            spaces = spaces + 1;
        }

        //increment

        int inc = 1, display = row;
        while (inc <= row)
        {
            cout << display;
            display++;
            inc++;
        }

        //decrement

        int dec = 1, display2 = 2 * row - 2;
        while (dec <= row - 1)
        {
            cout << display2;
            dec++;
            display2--;
        }
        cout << endl;
        row++;
    }

    return 0;
}