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
    int cases;
    cin >> cases;
    for (int i=0; i<cases;i++){
        int number, p, q;
        string frac;
        cin>> number>>frac;
        vector<string> fractions = string_split(frac,"/");
        p=stoi(fractions[0]);
        q=stoi(fractions[1]);
        int depth=0;
        vector <int> directions;
        while(p!=1||q!=1){
            if( p<q){
                q-=p;
                directions.push_back(0);
                depth++;
            }
            else{
                p-=q;
                directions.push_back(1);
                depth++;
            }
        }
        long pos=0;

        pos+= pow(2,depth);
        depth--;
        //cout<<"p, q, and depth = "<<p<< " "<<q<<" "<<depth<<endl;
        for (int i=directions.size()-1; i>=0;i--){
            if(directions[i]==1){
                //cout<<"direction and stuff: "<<directions[i]<<" "<<depth<<endl;
                pos+=pow(2,depth);
            }

            depth--;
        }
        cout<<number<<" "<<pos<<endl;




    }

}