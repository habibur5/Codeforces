#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string te;
        te =a;
        a[0] = b[0];
        b[0] = te[0];
        cout<<a<<" "<<b<<endl;
    }

    return 0;
}