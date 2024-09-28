#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, group=0;
    
    cin>>n;
    for(int i = 0; i<n; i++){
        string s,pre;
        cin>> s;
        if( s != pre){
            group++;
            pre=s;
        }
    }
    cout << group<<endl;

    return 0;
}