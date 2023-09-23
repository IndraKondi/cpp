#include<iostream>
using namespace std;

void Iswap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping of integers: ";
    cout<<a<<" "<<b<<endl;
}
void Fswap(float a,float b)
{
    float t;
    t=a;
    a=b;
    b=t;
    cout<<"After swapping of floating numbers: ";
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int num1,num2;
    float num3,num4;
    cout<<"Enter two integer numbers: ";
    cin>>num1>>num2;
    //cout<<num1<<" "<<num2<<"\n";
    cout<<"Enter two floating numbers: ";
    cin>>num3>>num4;
    //cout<<num3<<" "<<num4<<endl;
    Iswap(num1,num2);
    Fswap(num3,num4);
    return 0;
}