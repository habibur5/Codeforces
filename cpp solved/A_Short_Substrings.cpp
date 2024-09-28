#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin>>s;
        vector<char>v;
        for (int i=0; i<s.size(); i++){
            if(i%2==0 && i!=0){
                continue;
            }else{
                v.push_back(s[i]);
            }
        }
        for(auto it:v){
            cout<<it;
        }
        cout<<endl;
    }

    return 0;
}
