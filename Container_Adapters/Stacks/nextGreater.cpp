// Find next closest greater element (position wise)
// If not found print -1 for that number
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printNextGreater(int *arr, int n){
    vector<int> res;
    stack<int> s;
    s.push(arr[n-1]);
    res.push_back(-1);

    for(int i=n-2; i>=0; i--) {
        while(!s.empty() && s.top() <= arr[i])
            s.pop();
        int nextG = s.empty()? -1 : s.top();
        res.push_back(nextG);
        s.push(arr[i]);
    }

    reverse(res.begin(), res.end());
    for(int i:res)
        cout << i << " ";
}

int main() {
   int arr[] = {15,10,18,12,4,6,2,8};
   printNextGreater(arr, 8);
}
