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
        int Vanya = 0;
        for (int i = 1; i <= 22; i++)
        {
            if (Vanya > 10){
                cout << "Second"<<endl;
                break;
            }else
            {
                if (i % 2 != 0){
                    if ((n + 1) % 3 == 0)
                    {
                        cout << "First" << endl;
                        break;
                    }
                    else if ((n - 1) % 3 == 0)
                    {
                        cout << "First" << endl;
                        break;
                    }
                    else if ((n - 1) % 3 != 0){
                        n -= 1;
                        Vanya++;
                    }   
                    else{
                        n += 1;
                        Vanya++;
                    }
                }
                else
                {
                    if ((n + 1) % 3 == 0)
                    {
                        cout << "Second" << endl;
                        break;
                    }
                    else if ((n - 1) % 3 == 0)
                    {
                        cout << "Second" << endl;
                        break;
                    }
                    else if ((n - 1) % 3 != 0)
                    {
                        n -= 1;
                    }

                    else
                    {
                        n += 1;
                    }
                }
            }
        }
    }

    return 0;
}