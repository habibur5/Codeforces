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
    ll x,y,z,k;
    cin>>x>>y>>z>>k;
    ll ans=0;
    for(ll i=1; i<=x; i++){
        for(ll j=1; j<=y; j++){
            ll flag1 =0;
            ll flag2 = 0;
            if(k%(i*j) ==0)
                flag1 = 1;
            if(k/(i*j) <=z)
                flag2=1;
            if(flag1 && flag2){
                ll side1=i;
                ll side2= j;
                ll side3= k/(i*j);
                ll distancePlaces = (x-side1+1);
                distancePlaces *= (y - side2 + 1);
                distancePlaces *= (z - side3 + 1);
                ans = max(ans, distancePlaces);
            }
        }
    }
    cout<<ans<<endl;
   }
    return 0;
}