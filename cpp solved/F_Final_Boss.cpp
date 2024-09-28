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
        ll h, n;
        cin >> h >> n;
        vector<ll> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        vector<ll> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            h -= p[i];
        }
        if (h <= 0)
        {
            cout << 1 << endl;
            continue;
        }
        ll l = 0;
        ll r = 1e12;
        ll ans;
        while (l <= r)
        {
            ll mid = (l + r) >> 1; // shift operator (it means divided by 2^1)
            ll s = 0;
            for (int i = 0; i < n; i++){
                s += (mid / c[i]) * p[i];
            }
                
            if (h - s <= 0)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans + 1 << endl;
    }

    return 0;
}