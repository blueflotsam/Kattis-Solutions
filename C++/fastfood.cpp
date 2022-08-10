#include <bits/stdc++.h>

using namespace std;

int main(){
    // #ifndef TEST
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n_cases;
    cin >> n_cases;
    while(n_cases--){
        int prizes , stickers;
        cin >> prizes >> stickers;
        queue<pair<int, set<int>>> q;
        for(int i = 0; i < prizes; i++){
            int req_stickers;
            cin >> req_stickers;
            set<int> required; 
            while(req_stickers--){
                int curr;
                cin >> curr;
                required.insert(curr);
            }
            int prize_value;
            cin >> prize_value;
            q.push({prize_value, required});
        }
        vector<int> v;
        for(int i = 0; i < stickers; i++){
            int number_of_sticker;
            cin >> number_of_sticker;
            v.push_back(number_of_sticker);
        }
        int turned_in = 0;
        while(q.size()){
            auto p = q.front();
            q.pop();
            set<int> required = p.second;
            int claimed = INT_MAX;
            for(auto it = required.begin(); it != required.end(); it++){
                for(int i = 1; i <= v.size(); i++){
                    if(*it == i){
                        claimed = min(claimed, v[i-1]);
                    }
                }
            }
            turned_in += claimed * p.first;
        }
        cout << turned_in << endl;
    }
    return 0;
}