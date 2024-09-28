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
        int n,k;
        cin>>n>>k;
        vector<ll> v(n);

        for(int i = 0; i<n; i++){
            cin >>v[i];
        }
        vector<ll> v2 = v;
        sort(all(v2));
        if(v2==v){
            cout << "YES" << endl;
        }else{
            if (k > 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
   
    return 0;
}