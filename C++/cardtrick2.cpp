#include <bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    cin >> cases;
    for (int i = 0; i <cases; i++) {
        int num;
        cin >> num;
        int iterate = -1;
        int ans[num];
        for (int y = 0; y < num; y++) {
            ans[y] = -1;
        }
        for(int j=0;j<num;j++){

            int idk=0;
            while(idk<j+2){
                iterate++;
                idk++;
                while(iterate>=num){
                    iterate-=num;
                }
                while(ans[iterate]!=-1){
                    iterate++;
                    if(iterate>=num)
                        iterate-=num;
                }
            }
            while(iterate>=num){
                iterate-=num;
            }
            while(ans[iterate]!=-1) {
                iterate++;
            }
            ans[iterate]=j+1;
        }
        for(int k=0;k<num;k++)
            cout<<ans[k]<<" ";
        cout<<endl;
    }
}