#include<iostream>
using namespace std;
int count = 0;
class sum
{
    public:
    sum()
    {
        count++;
        cout<<"This is constructor"<< count <<endl;
    }
    ~sum()
    {
        cout<<"This is destructor"<< count << endl;
        count--;
    }
};

int main()
{
    sum s1, s2, s3;
    return 0;
}