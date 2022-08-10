#include <bits/stdc++.h>

using namespace std;

int main(){
    // #ifndef TEST
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int c, f;

    cin >> f >> c;

    int arr[f];
    for(auto i = 0; i < f; i++){
        cin >> arr[i];
    }
    int types = 0;
    int max = 0;
    for(auto i = 0; i < f; i++){
        int weight = 0;
        int j = i;
        int fruits_eaten = 0;
        for(auto j = i; j < f; j++){
            if(weight + arr[j] <= c){
                weight += arr[j];
                fruits_eaten++;
            }
        }
        max = std::max(max, fruits_eaten);
    }
    cout << max;

    return 0;
}