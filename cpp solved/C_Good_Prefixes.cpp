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
   
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> v(n);
        forn(i,n){
            cin>>v[i];
        }
        ll mx=0;
        ll sum =0;
        ll count=0;
        forn(i,n){
            sum += v[i];
            mx = max(mx,v[i]);
            // s-mx== mx
            if(mx*2 == sum){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
       