#include <bits/stdc++.h>

using namespace std;

set<queue<int>> simple_loops;

array<vector<int>, 9> stations;

bool add_loop(vector<int> visited){
    if(visited.size() == 0){
        return false;
    }
    auto min = min_element(visited.begin(), visited.end());
    queue<int> q;
    for_each(visited.begin(), visited.end(), [&q = q](auto i){ q.push(i);});
    while(q.front() != *min){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    return simple_loops.insert(q).second;
}

void func(int start, int current, vector<int> visited){
    
    if(visited.size () && current == start){
        add_loop(visited);
    } else {
        vector<int> unvisited;
        for(auto i:stations[current]){
            if(find(visited.begin(), visited.end(), i) == visited.end() ){
                unvisited.push_back(i);
            }
        }
        for(auto i : unvisited){
            visited.push_back(i);
            func(start, i, visited);
            visited.erase(visited.end() - 1);
        }
    }
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n_stations, connections;
    cin >> n_stations >> connections;
    set<int> tokeep;
    while(connections--){
        int start, end;
        cin >> start >> end;
        tokeep.insert(end);
        stations[start].push_back(end);
    }
    for(int i = 0; i < n_stations; i++){
        if(tokeep.find(i) == tokeep.end()){
            stations[i].clear();
        }
    }
    for(int i = 0; i < n_stations; i++){
        func(i, i, {});
    }
    cout << simple_loops.size() << endl;
    return 0;
}