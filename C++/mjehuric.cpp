#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 5> arr{};
    for (int &i : arr) {
        cin>> i;
    }
    int pos=0;
    array<int, 5> curr{};
    array<int, 5>arr2{1,2,3,4,5};
    while(arr!=arr2){
        int temp=0;
        for (int i = pos; i <4 ; ++i) {
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                break;
            }
        }
        if(arr!=curr) {
            for (const auto &s: arr)
                std::cout << s << ' ';
            cout<<endl;
            curr=arr;
        }
        if(pos==3)
            pos=0;
        else
            pos++;
    }
    return 0;
}