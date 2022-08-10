#include <bits/stdc++.h>
int main() {
    std::string cases;
    std::cin >> cases;
    int a=0;
    int b=0;
    for (int i = 0; i <cases.size() ; i+=2) {
        if(cases.at(i)=='A'){
            a+=(cases.at(i+1)-48);
            if(a>10 &&a-b>1) {
                std::cout << "A";
                return 0;
            }
        }
        else{
            b+=(cases.at(i+1)-48);
            if(b>10 &&b-a>1) {
                std::cout << "B";
                return 0;
            }
        }
    }
}