#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

bool matches(char a, char b){
    return ((a=='(' && b==')') 
            || (a=='[' && b==']') 
            || (a=='{' && b=='}'));
}

bool isBalanced(string str){
    int n = str.size();
    
    // If str consists of only braces
    if(n%2!=0)    
        return false;
    
    stack<char> s;

    for(int i=0; i<n; i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            s.push(str[i]);
        else {
            if(s.empty())
                return false;                
            else if(matches(s.top(), str[i]))
                s.pop();
            else 
                return false;
        }
    }

    return s.empty();
}

int main() {
    string str;
    cin>>str;
    cout << boolalpha <<isBalanced(str);
}