#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a,b values: ";
    cin>>a>>b;
    try
    {
        int c;
        if(b==0)
        {
            throw b;
        }
        else
        {
            c=a/b;
            cout<<"result is: "<<c;
        }
    }
    catch(int b)
    {
        cerr<<"enter number other than zero";
    }
    return 0;
}