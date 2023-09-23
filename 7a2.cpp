#include <iostream>
using namespace std;

void division(int a, int b)
{
    if(b==0)
    {
        throw b;
    }
    else
    {
        cout<<"result is "<<a/b<<endl;
    }
}
int main()
{
    int a,b;
    cout<<"enter a,b values: ";
    cin>>a>>b;
    try
    {
        division(a,b);
    }
    catch(int b)
    {
        cerr<<"Enter non-zero denominator";
    }
    catch(...)
    {
        cerr<<"error";
    }
    return 0;
}