#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void printStockSpan(int *arr, int n){
    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for(int i=1; i<n; i++){
        while(!s.empty() && arr[s.top()]<=arr[i])
            s.pop();
        int span = s.empty()?(i+1):(i-s.top());
        cout << span << " ";
        s.push(i);
    }
}

int main() {
    int arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};
    printStockSpan(arr, 10);

    return 0;
}