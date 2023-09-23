#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

int push(int x)
{
    q.push(x);
}

int pop()
{
    cout<<"The element that was pushed: "<<q.front()<<endl;
    q.pop();
}
int front()
{
    if(!q.empty())
    {
        cout<<"front element in the queue is: "<<q.front()<<endl;
    }
    else
       return 0;
}

int last()
{
    if(!q.empty())
    {
        cout<<"last element in the queue is: "<<q.back()<<endl;
    }
    return 0;
}

int size()
{
    cout<<"size of the queue: "<<q.size()<<endl;
}
int main()
{
    int choice, x;
   
    while(1)
    { 
        cout<<"Choose a choice\n";
        cout<<"1. Push \n2. Pop \n3. front element \n4. last element \n5. Size of queue\n6. Queue Elements \n";
        cout<<"Enter a choice: ";
        cin >> choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
               cout<<"Enter the element to push: ";
               cin>>x;
               push(x);
               break;
            case 2:
               pop();
               break;
            case 3:
               front();
               break;
            case 4:
               last();
               break;
            case 5:
               size();
               break;
            case 6:
               cout<<"Queue elements are: ";
               for(int i=0; i<q.size(); i++)
               {
                  cout<<q.front()<<" \n";
                  q.pop();
               }
               break;
            default:
               cout<<"Invalid choice";
               break;
        }
    }
    return 0;
}
