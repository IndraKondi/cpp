#include<iostream>
using namespace std;

class employee
{
    int id;
    char name[30];
    public:
    void get_data()
    {
        cout<<"id: ";
        cin>>id;
        cout<<"name: ";
        cin>>name;
    }
    void put_data()
    {
        cout<<"id: "<<id<<endl;
        cout<<"name: "<<name<<endl;
    }
};

int main()
{
    int n;
    employee emp[30];
    cout<<"no of employees:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        emp[i].get_data();
    }
    for(int i=0; i<n; i++)
    {
        emp[i].put_data();
    }
    return 0;
}