#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,r, dup;
    cin>>s; //code
    cin>>t;
    dup=s;
    int size = s.size();
    int j=0;
    for(int i = size; i>0; i-- ){
        s[j] = dup[i-1];
        j++;
    }
    if(s==t){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}