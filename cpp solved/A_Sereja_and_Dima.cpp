#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    vector<int> v;
    int rr = n-1;
    // int elsecount=0;

    int sereja = 0, dima = 0;
    for (int j = 0; j < n; j++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for (int i =0; i<n; i++)
    {
        if(i%2==0){
            if (v[0] > v[v.size() - 1])
            {
                sereja+=v[0];
                v.erase(v.begin());
            }
            else
            {
                sereja += v[v.size()-1];
                v.erase(v.begin()+ (v.size()-1));
            }
        }else{
            if (v[0] > v[v.size() - 1])
            {
                dima += v[0];
                v.erase(v.begin());
            }
            else
            {
                dima += v[v.size() - 1];
                v.erase(v.begin() + (v.size() - 1));
            }
        }
        
    }
    cout<<sereja<< " "<<dima<<endl;

    return 0;
}
