/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,k,found = 0;
        cin>>a>>k;
        int arr[a];

        for (int i = 0; i <a; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i <a; i++)
        {
            if(arr[i]==k){
                cout<<"YES"<<endl;
                found = 5;
                break;
            }
        }
        if(found !=5) cout<<"NO"<<endl;
        
    }
    return 0;
}