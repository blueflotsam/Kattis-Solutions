//Cory Haas
// compile tags -lpthread -std=c++11 -pthread
#include <bits/stdc++.h>
using namespace std;
#include <thread>
#include <iostream>
#include <cstdlib>
std::vector<std::string> string_split(const std::string &s, const string &delimiter=" "){
    std::vector<std::string> tokens;
    std::string token;
    size_t pos = 0, prev = 0, delim_length = delimiter.length();
    while ((pos = s.find(delimiter, pos)) != std::string::npos){
        token = s.substr(prev, pos - prev);
        if(!token.empty()){
            tokens.push_back(token);
        }
        prev = pos += delim_length;
    }
    tokens.push_back(s.substr(prev, pos));
    return tokens;
}



int main(){
string str;
getline(cin,str);
int length=string_split(str," ").size()-1;
getline(cin,str);
vector<string> names;
vector<string> team1;
vector<string> team2;
    int num=stoi(str);
    for (int i = 0; i < num; ++i) {
        getline(cin,str);
        names.push_back(str);
    }
    int iterator=0;
    bool t1=true;
    for (int j = 0; j <num ; ++j) {
        iterator+=length;
        while(iterator>=names.size())
            iterator-=names.size();
        if(t1)
            team1.push_back(names.at(iterator));
        else
            team2.push_back(names.at(iterator));
        names.erase(names.begin()+iterator);
        if(t1)
            t1=false;
        else
            t1=true;
    }
    cout<<team1.size()<<endl;
    for (int k = 0; k <team1.size() ; ++k) {
        cout<<team1[k]<<endl;
    }
    cout<<team2.size()<<endl;
    for (int k = 0; k <team2.size() ; ++k) {
        cout<<team2[k]<<endl;
    }


}