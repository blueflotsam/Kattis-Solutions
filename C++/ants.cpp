#include <bits/stdc++.h>
using namespace std;

int main() {
    // #ifndef TESTING
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int n_cases;
    cin >> n_cases;
    while(n_cases--){
        int min = 0;
        int max = 0;
        int l, n;
        cin >> l >> n;
        while(n--){
            int elem;
            cin >> elem;
            min = std::max(min, std::min(elem, l - elem));
            max = std::max(max, std::max(elem, l - elem));
        }
        cout << min << " " << max << endl;
    }
    
    return 0;
}