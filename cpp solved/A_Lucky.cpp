#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int first=0,last=0;
        for(int i=0; i<3; i++){
            first+=(int)s[i];
        }
        for (int i = 3; i < 7; i++)
        {
            last += (int)s[i];
        }
        if(first == last){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}