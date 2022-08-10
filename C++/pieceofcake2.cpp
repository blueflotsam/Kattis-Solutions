#include <bits/stdc++.h>
using namespace std;

int main(){
int length, x, y;
cin>>length>>x>>y;
int x1=length-x;
if(x>x1)
x1=x;
int y1=length-y;
if(y>y1)
y1=y;
cout<<y1*x1*4;
return 0;
}