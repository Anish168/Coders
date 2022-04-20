#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class stack
{
    // yeh bblueprint issliye yha hum kuch bhi value fix nhi krenge
    node *head;
    int length;

public:
    // constructor
    stack()
    {
        head = NULL; // step 1 starting m stack nhi bna hoga
    }

    // push
    void push(int data)
    {
        // insert at front
        node *n = new node(data);
        n->next = head;
        head = n;
        length++;
    }

    // pop
    void pop()
    {
        // delete at front
        if (head == NULL)
        {
            return;
        }
        // single node
        else if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        // many nods
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
            temp = NULL; // pointer m hum garbage value nhi rekhte issliye null kr diya
        }
        length--;
    }

    // top
    int top()
    {
        return head->data;
    }

    // size
    int size()
    {
        return length;
    }

    // is Empty
    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    stack s;
    s.push(22);
    s.push(23);
    s.push(24);
    s.push(25);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}