#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int low=0, up=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < 97){
            up++;
        }else{
            low++;
        }
    }
    if(up>low){
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }  
    }else{
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;

    return 0;
}