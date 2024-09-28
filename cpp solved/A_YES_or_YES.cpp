#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;

        if (s[0] == 89 || s[0] == 121)
        {
            c++;
        }
        if (s[1] == 69 || s[1] == 101)
        {
            c++;
        }
        if (s[2] == 83 || s[2] == 115)
        {
            c++;
        }

        if (c == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}