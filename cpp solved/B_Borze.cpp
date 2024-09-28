#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len  =s.size();
    vector<int> v;

    for(int i =0; i<len; i++){
        if(s[i]=='.'){
            v.push_back(0);
        }else if(s[i]=='-' && s[i+1]=='.'){
            v.push_back(1);
            i+=1;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            v.push_back(2);
            i+=1;
        }
    }
    for(auto it:v){
        cout<<it;
    }

    return 0;
}