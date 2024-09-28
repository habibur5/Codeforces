#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    string ss = a + b;
    int len1 = ss.size();
    int len2 = c.size();
    char m_ss[len1], m_c[len2];
    if (len1 != len2)
    {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < len1; i++)
    {
        m_ss[i] =ss[i];
    }
    for (int i = 0; i < c.size(); i++)
    {
        m_c[i] = c[i];
    }
    sort(m_ss, m_ss+len1);
    sort(m_c, m_c + len2);
    for (int i = 0; i < len1; i++){
        if(m_ss [i] != m_c[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
