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
        int tt;
        cin>>tt;
        string s;
        cin>>s;
        int count= 0;
        int block = 0;
        int total_empty = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='#'){
                count=0;
                block++;
            }else{
                count++;
                total_empty++;
                if (count == 3)
                {
                    cout<<2<<endl;
                    break;
                }
            }
            if(i == s.size()-1){
                cout<<total_empty<<endl;
            }
        }
        
    }

   
    return 0;
}