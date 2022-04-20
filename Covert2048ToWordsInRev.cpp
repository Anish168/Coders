#include<iostream>
using namespace std;

string arr[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void Covert2048ToWordsInRev(int n)
{
    //base case
    if(n==0)
    {
        return;
    }

    //recursive case
    int rem=n%10;
    cout<<arr[rem]<<" ";
    Covert2048ToWordsInRev(n/10);
}

int main()
{
    //n sould be greater than 0
    int n;
    cin>>n;
    Covert2048ToWordsInRev(n);
    return 0;
}