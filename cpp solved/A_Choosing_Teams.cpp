#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    vector<int>v;
    int accept = 5-k;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp<=accept){
            v.push_back(temp);
        }
    }
    int res = v.size()/3;
    cout<<res<<endl;

    return 0;
}