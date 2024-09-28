/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i,n) for(int i=1;i<n;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
   
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
            if(v[i]>n){
                cout<<"NO"<<endl;
                continue;
            }
        }
            
        vector<int> v2 = v;
        sort(all(v2));
        if(v2 == v){
            cout<<"YES"<<endl;
            continue;
        }
        int count = 0;
        for (int i = 1; i < n-1; i++)
        {
            if (v[i]> v[i - 1]  &&v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                count++;
            }
        }
        if (count>>0)
        {
            cout << "YES" << endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
   
    return 0;
}