#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    for(int i = 1; i<6; i++){
        for(int j=1; j<6;j++){
            cin>>n;
            if(n==1){
                cout<<abs(3-i)+abs(3-j)<<endl;
            }
        }

    }

    return 0;
}