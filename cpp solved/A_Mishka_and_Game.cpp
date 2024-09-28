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
    int Mishka = 0, Chris = 0;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            Mishka++;
        }
        else if( b> a)
        {
            Chris++;
        }
    }
    if (Mishka > Chris)
    {
        cout << "Mishka" << endl;
    }
    else if (Chris > Mishka)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}