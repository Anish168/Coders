#include <iostream>
using namespace std;

/*int fibonacci(int pos)
{
    //base case
    if (pos == 0 || pos == 1)
    {
        return pos;
    }

    //recursive case
    int chotaans1 = fibonacci(pos - 1);
    int chotaans2 = fibonacci(pos - 2);

    //with the help of above 2 case calculate final ans
    int final = chotaans1 + chotaans2;

    return final;
}
*/

int fibonacci(int pos)
{
    //base case
    if (pos == 0 || pos == 1)
    {
        return pos;
    }

    //recursive case

    return fibonacci(pos - 1) + fibonacci(pos - 2);
}

int main()
{
    int pos;
    cin >> pos;
    cout << "Fibonacci of " << pos << " position is " << fibonacci(pos) << endl;
    return 0;
}