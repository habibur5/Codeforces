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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(n%3>0){
            cout << "First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }

    return 0;
}