#include<iostream>
#include<stack>

using namespace std;

// Time complexity of all the operations : O(1)
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top() << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop(); 
    }
    
    return 0;
}