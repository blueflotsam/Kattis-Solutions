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
vector<string> arr=string_split(str, " ");
int inputs=stoi(arr[0]);
int length=stoi(arr[1]);
int data[stoi(arr[1])][2];
double total=0;

    for (int i = 0; i <length ; ++i) {
        data[i][0]=0;
        data[i][1]=0;
    }

    for (int i = 0; i <inputs ; ++i) {
        getline(cin,str);
        arr=string_split(str, " ");
        data[stoi(arr[0])-1][0]+=stoi(arr[1]);
        data[stoi(arr[0])-1][1]+=stoi(arr[2]);
        total+=stoi(arr[1])+stoi(arr[2]);
    }
    double wa=0;
    double wb=0;
    for (int j = 0; j <length ; ++j) {
        int a=data[j][0];
        int b=data[j][1];
        if(a>b){
            a-=((a+b)/2)+1;
            cout<<"A ";
        } else {
            b -= ((a + b) / 2) + 1;
            cout<<"B ";
        }
        cout<<a<<" "<<b<<endl;
        wa+=a;
        wb+=b;
    }
    double ans;
    if(wa>wb)
        ans=wa-wb;
    else
        ans=wb-wa;
    cout<<setprecision(10);
    cout<<ans/total<<endl;

}