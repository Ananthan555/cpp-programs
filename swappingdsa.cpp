#include <bits/stdc++.h>
using namespace std;

void printss(){
    stack<int> st1, st2;

    // Fill st1
    st1.push(10);
    st1.push(20);
    st1.push(30);   // st1 = {10, 20, 30} (top = 30)

    // Fill st2
    st2.push(100);
    st2.push(200);  // st2 = {100, 200} (top = 200)

    // Print st1 and st2 before swap
    cout << "Before swap:\n";

    stack<int> temp1 = st1;  // copy to iterate
    cout << "Stack 1:\n";
    while(!temp1.empty()) {
        cout << temp1.top() << "\n";
        temp1.pop();
    }

    stack<int> temp2 = st2;  // copy to iterate
    cout << "Stack 2:\n";
    while(!temp2.empty()) {
        cout << temp2.top() << "\n";
        temp2.pop();
    }

    // Swap the stacks
    st1.swap(st2);

    // Print st1 and st2 after swap
    cout << "\nAfter swap:\n";

    temp1 = st1;
    cout << "Stack 1:\n";
    while(!temp1.empty()) {
        cout << temp1.top() << "\n";
        temp1.pop();
    }

    temp2 = st2;
    cout << "Stack 2:\n";
    while(!temp2.empty()) {
        cout << temp2.top() << "\n";
        temp2.pop();
    }

}
void printsd(){
     queue<int> q1, q2;

    // Fill queues
    q1.push(1);
    q1.push(2);
    q1.push(3);

    q2.push(100);
    q2.push(200);

    cout << "q1 before swap:\n";
    queue<int> temp = q1;  // copy to iterate
    while(!temp.empty()) {
        cout << temp.front() << "\n";
        temp.pop();
    }

    // Swap q1 and q2
    q1.swap(q2);

    cout << "\nq1 after swap:\n";
    temp = q1;  // iterate again
    while(!temp.empty()) {
        cout << temp.front() << "\n";
        temp.pop();
    }

    
}
int main() {

    printsd();
    return 0;
    
}
