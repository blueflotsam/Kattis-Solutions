#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    int arr[cases];
    arr[0]=1;
    for (int i = 2; i < cases+1; i++) {
        int between;
        cin>>between;
        arr[between+1]=i;
    }
    for (int j = 0; j <cases ; ++j) {
        cout<<arr[j]<<" ";
    }
}