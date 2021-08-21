// Find previous closest greater element (position wise)
// If not found print -1 for that number
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printPrevGreater(int *arr, int n){
    stack<int> s;
    s.push(arr[0]);
    cout << -1 << " ";

    for(int i=1; i<n; i++) {
        while(!s.empty() && s.top() <= arr[i])
            s.pop();    
        
        int prevG = s.empty()? -1 : s.top();
        cout << prevG << " ";
        s.push(arr[i]);
    }

}

int main() {
   int arr[] = {15,10,18,12,4,6,2,8};
   printPrevGreater(arr, 8);
}
