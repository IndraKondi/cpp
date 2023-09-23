#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n1, n2;
    stack<int> s1, s2;
    cout << "Enter the number of elements in stack1: ";
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cout<<"element "<<i+1<<":";
        cin >> x;
        s1.push(x);
    }
    if(!s1.empty())
        cout<<"Top of elements of stack1: "<<s1.top()<<endl;
    if(!s1.empty())
        cout<<"Element that is popped: "<<s1.top()<<endl;
    cout<<"Size of stack1: "<<s1.size()<<endl;
    
    cout << "Enter the number of elements in stack2: ";
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        int x;
        cout<<"element "<<i+1<<":";
        cin >> x;
        s2.push(x);
    }
    if(!s2.empty())
        cout<<"Top of elements of stack2: "<<s2.top()<<endl;
        s1.pop();
    if(!s2.empty())
        cout<<"Element that is popped: "<<s2.top()<<endl;
        s2.pop();
    cout<<"Size of stack2: "<<s2.size();
}