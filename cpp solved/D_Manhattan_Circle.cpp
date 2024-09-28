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
    ll n,m,i,j;
    cin>>n>>m;
    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j<m; j++)
        {
            a[i][j] = s[j];
        }
    }
    ll firstRaw = -1, lastRow = -1;
    ll firstCol = -1, lastCol = -1;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j] == '#'){
                if(firstRaw == -1){
                    firstRaw = i+1;
                    break;
                }
            }
            if(firstRaw != -1){
                break;
            }
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int j =m-1;j >=0; j--)
        {
            if (a[i][j] == '#')
            {
                if (lastRow == -1)
                {
                    lastRow = i+1;
                    break;
                }
            }
            if (lastRow != -1)
            {
                break;
            }
        }
    }

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i][j] == '#')
            {
                if (firstCol == -1)
                {
                    firstCol = j+1;
                    break;
                }
            }
            if (firstCol != -1)
            {
                break;
            }
        }
    }


    for (int j = m-1; j >=0; j--)
    {
        for (int i =n-1 ; i >=0; i--)
        {
            if (a[i][j] == '#')
            {
                if (lastCol == -1)
                {
                    lastCol = j+1;
                    break;
                }
            }
            if (lastCol != -1)
            {
                break;
            }
        }
    }
/*     firstCol++;
    lastCol++;
    firstRaw++;
    lastRow++; */
    cout<<(firstRaw+(lastRow-firstRaw)/2)<<" "<<(firstCol+(lastCol-firstCol)/2)<<endl;
        }
    
   
    return 0;
}