#include <bits/stdc++.h>
using namespace std;

int main(){
int cases;
cin>>cases;
for(int i=0; i<cases; i++){
    int sum=0;
    string input;
    cin>>input;
    for(int j=0;j<input.length();j++){
        int num=input.at(j)-48;
        if(input.length()%2==0){
            if(j%2==0){
                num*=2;
                if(num>9){
                    num=num-10+1;
                }
                sum+=num;
            }
            else{
                sum+=num;
            }
        }
        else{
            if(j%2==0){
                sum+=num;
            }
            else{
                num*=2;
                if(num>9){
                    num=num-10+1;
                }
                sum+=num;
            }
        }
    }
    if(sum%10==0)
        cout<<"PASS"<<endl;
    else
        cout<<"FAIL"<<endl;



}


return 0;
}