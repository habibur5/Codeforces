#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
     while (t--){
        long long a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << '0' << endl; 
        }
        else
        {
            double c = double(a) / b;
            int d = ceil(c);
            cout<<(d*b)-a<<endl;
        }
    }

    return 0;
}