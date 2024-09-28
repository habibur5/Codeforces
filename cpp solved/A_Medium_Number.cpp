#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a<c)
            cout<<a<<endl;
        else if(b>a && b<c)
            cout<<b<<endl;
        else if(c>a && c<b)
            cout<<c<<endl;
        else if(a>c &&a<b)
            cout<< a<<endl;
        else if(b>c && b<a)
            cout<<b<<endl;
        else cout<<c<<endl;

    }
    return 0;
}