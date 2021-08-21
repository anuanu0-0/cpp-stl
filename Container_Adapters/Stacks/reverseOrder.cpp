#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

// USE CASE : 
// Can be used to reverse order in case of forward list or singly ll
// where there is no random iterator and only one reference 
void reverseOrder(string str){
    stack<char> s;
    for(int i=0; i<str.size(); i++)
        s.push(str[i]);
    
    str="";
    while(!s.empty()){
        str+=s.top();
        s.pop();
    }

    cout << str << endl;
}

int main() {
    string str;
    cin>>str;
    reverseOrder(str);
}