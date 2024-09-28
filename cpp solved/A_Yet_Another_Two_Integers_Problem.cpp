#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int sub = abs(a-b);
        int res = sub/10;
        if(sub%10==0){
            cout<<res<<endl;

        }else{
            cout << res + 1 << endl;
        }
    }

    return 0;
}