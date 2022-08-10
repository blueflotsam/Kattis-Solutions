#include <bits/stdc++.h>
#include <array>
using namespace std;

int main(){
int sales, cost;
cin>>sales>>cost;
vector<int> prices;
for(int i=0; i<sales;i++){
	int num;
	cin>>num;
	prices.push_back(num);
}
int counter=0;
sort(prices.begin(), prices.end());
int prev=0;
for(auto i=prices.begin(); i!=prices.end();i++){
	if(*i+prev<=cost){
		counter++;		
	}
	prev=*i;
}
if(counter>0)
	cout<<counter;
else
	cout<<1;
return 0;
}