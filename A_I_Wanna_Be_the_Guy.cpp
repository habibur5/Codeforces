#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n;
    set<int> s;
    cin>>p;
    for(int i=0; i<p;i++){
        int temp;
        cin>>temp;
        s.insert(temp);
    }
    cin>>q;
    for (int i = 0; i <q; i++)
    {
        int temp;
        cin >>temp;
        s.insert(temp);
    }
    for (int i = 1; i <=n; i++)
    {
        if(s.find(i) == s.end()){
            cout << "Oh, my keyboard!"<<endl;
            return 0;
        }
        
    }
    cout << "I become the guy."<<endl;

        return 0;
}