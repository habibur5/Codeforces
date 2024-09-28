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
    int r, c, i, j;
    cin >> r >> c;
    ll arr[r][c];
    vector<ll>v;
    for(int i =0; i<r;i++)
    {
        for(int j=0;j<c; j++)
        {
            cin >> arr[i][j];
            
        }
    }
    ll rowMax = 0;
    for (int i = 0; i < r; i++)
    {
        
        ll rowMin = arr[i][0];
        for (j = 0; j < c; j++)
        {

            rowMin = min(rowMin, arr[i][j]);
            rowMax = max(rowMax,rowMin);
            
        }
    }

    ll colMax = 0;
    for (int i = 0; i < c; i++)
    {
        
        ll colMin =arr[0][i];
        for (j = 0; j < r; j++)
        {
            colMin = min(colMin, arr[j][i]);
            colMax = max(colMax,colMin);
        }
    }
    cout << min(rowMax, colMax) << endl;

    return 0;
}