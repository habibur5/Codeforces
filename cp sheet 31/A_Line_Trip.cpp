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
        int n,x;
        cin>>n>>x;
        vector<int> v(n);
        int dist_gap;
        int preview = 0;
        int mx = 0;
        for(int i=0; i<=n; i++){
            if(i!=n){
                cin >> v[i];
                dist_gap = v[i] - preview;
                preview = v[i];
            }   
            else{
                dist_gap = x-v[n-1];
                dist_gap *=2;
            }
            if(dist_gap>mx){
                mx= dist_gap;
            } 
        }
        cout<<mx<<endl;
    }
    return 0;
}