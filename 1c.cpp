#include<iostream>
using namespace std;

int add(int a=0, int b=0, int c=0)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter a,b,c values: ";
    cin>>a>>b>>c;
    int result1=add();
    int result2=add(a,b);
    int result3=add(a,b,c);
    cout<<"result1 is "<<result1<<endl;
    cout<<"result2 is "<<result2<<endl;
    cout<<"result3 is "<<result3<<endl;
    return 0;
}
