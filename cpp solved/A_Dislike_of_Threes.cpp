#include <bits/stdc++.h>
using namespace std;
const int N =10e3;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for (int i = 4; i <N; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            v.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
    return 0;
}