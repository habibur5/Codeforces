/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int count = 0,xl,sl,step=0;
        cin>>xl>>sl;
        string x,s;
        cin>>x>>s;

        for(int j = 1; j<= 10; j++){
            if(x.find(s)!=-1){
                
                cout<<count<<endl;
                step = 5;
                break;
            }else{
                x+=x;
                count++;
            }
        
            
        }
        if(step!=5){
            cout<<-1<<endl;
        }
    }
    return 0;
}