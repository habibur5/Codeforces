/**
 * author:  habiburrahman0001
 **/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

const int N = 1e6;
int ar[N];

int main()
{
    
    int t;
    cin >> t;
    while (t--)
    {
        
        int n, i,res=0;
        forn(i, N)
        {
            ar[i] = 0;
        }
        cin >> n;
        int arr[n];
        set<int> s;
        forn(i, n)
        {
            cin >> arr[i];
            ar[arr[i]]+=1;
            // cout<<"count = " << ar[arr[i]]<<endl;
            s.insert(arr[i]);
        }
        if(n<=2 || s.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(s.size()<=2 && n>2){
            for(auto it:s){
                /* cout<<it<<endl;
                cout<<ar[it]<<endl; */
                res = abs(ar[it]-res); 
                // cout<<"res = "<<res<<endl;
            }
            if (res < 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}