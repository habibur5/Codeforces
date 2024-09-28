/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int team, res=0;
        cin>>team;
        team-=1;
        int arr[team];
        for(int i=0; i<team; i++) {
            cin>>arr[i];
            res+=arr[i];
        }
        if(res>0) cout<<"-"<<res<<endl;
        else cout<< abs(res)<<endl;
    }
    
    return 0;
}