#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        char v[s.size() / 2][2];
        for(int i=0; i<s.size()/2; i++){
            for(int j=0; j<2; j++){
                v[i][j] =s[count];
                count++;
            }
        }
                
        for (int i = 0; i < s.size() / 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if(i==0){
                    cout << "i=" << i << " " << "j= " << j << endl;
                    cout<<v[i][j]<<endl;
                }else if(i>0){
                    cout<<"i="<<i<<" "<<"j= "<<j<<endl;
                    cout<<v[i][j]<<endl;
                }
                 
            }
        }
        cout<<endl;
    }

    return 0;
}