#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char> se;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            se.insert(s[i]);

        }
    }
    cout<<se.size()<<endl;
    return 0;
}