#include <bits/stdc++.h>
using namespace std;

int main(){
int length;
cin>>length;
int arr[length];
for(int i=0; i<length;i++){
    cin>>arr[i];
}

int day=1;
int max;
if(arr[0]>=arr[2])
    max=arr[0];
else
    max=arr[2];
for(int i=1; i<length-2; i++){
    int currmax=arr[i];
    if(arr[i+2]>currmax)
        currmax=arr[i+2];
    if(currmax<max){
        day=i+1;
        max=currmax;
    }
}
cout<<day<<" "<<max;
return 0;
}