//For more Stack STL :- stackcppreference
#include <iostream>
#include <stack> //ishme poori stack class define h STL h yeh means Standard Template Library
using namespace std;

int main()
{
    stack<int> s;
    s.push(33);
    s.push(34);
    s.push(35);
    s.push(36);

    cout<<s.size()<<endl;
    cout<<endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << endl;
    stack<char> s1;
    s1.push('A');
    s1.push('B');
    s1.push('C');
    s1.push('D');

    cout<<s1.size()<<endl;
    cout<<endl;
    while (!s1.empty())
    {
        cout << s1.top() << endl;
        s1.pop();
    }

    return 0;
}
