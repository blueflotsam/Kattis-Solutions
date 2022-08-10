#include <bits/stdc++.h>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int N, S, R;
    cin >> N >> S >> R;
    vector<bool> kayaks(N + 1);
    while(S--){
        int index;
        cin >> index;
        kayaks[index] = true;
    }
    vector<int> reserves;
    while(R--){
        int index;
        cin >> index;
        reserves.push_back(index);
    }
    sort(reserves.begin(), reserves.end());
    vector<int> no;
    for(auto i:reserves){
        if(kayaks[i]){
            kayaks[i] = false;
        } else if(i-1 >= 1 && i + 1 <= N &&kayaks[i-1] && kayaks[i+1]){
            no.push_back(i);
        } else if(i-1 >= 1 && kayaks[i-1]){
            kayaks[i-1] = false;
        } else if(i + 1 <= N && kayaks[i+1]){
            kayaks[i+1] = false;
        }
    }
    for(auto i:no){
        if(i-1 >= 1 && kayaks[i-1]){
            kayaks[i-1] = false;
        } else if(i + 1 <= N && kayaks[i+1]){
            kayaks[i+1] = false;
        }
    }
    int count = 0;
    for(auto i:kayaks){
        if(i){
            count++;
        }
    }
    cout << count;
    return 0;
}