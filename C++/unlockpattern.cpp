#include <bits/stdc++.h>

int main() {
    int arr [3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::cin>>arr[i][j];
        }
    }
    int counter=1;
    double distance=0;
    while(counter<9){
        int x=0;
        int y=0;
        int x1=0;
        int y1=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){

                if(counter==arr[i][j]){
                    x=i;
                    y=j;
                }

                if(counter+1==arr[i][j]){
                    x1=i;
                    y1=j;
                }

            }
        }
        double a=abs(x-x1);
        double b=abs(y-y1);
        distance+=sqrt(pow(a,2)+pow(b,2));
        counter++;
    }


    std::cout<<std::setprecision(10)<<distance<<std::endl;
    return 0;
}