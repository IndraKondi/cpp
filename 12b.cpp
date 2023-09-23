// 13. Write a program implementing a priority queue class with required operations using STL.

#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(20);
    pq.push(40);
    pq.push(30);
    cout << "Top element: " << pq.top() << endl;
    cout << "Priority queue size: " << pq.size() << endl;
    pq.pop();
    cout << "Priority queue size after pop: " << pq.size() << endl;
    cout << "Top element: " << pq.top() << endl;

    return 0;
}