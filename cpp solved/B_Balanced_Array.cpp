#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<n;i++)
#define forc(i,a, n, d) for (int i = a; i < n; i += d)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
   
int main() {
   int t,i,j,n,sum1,sum2;
   cin>>t;
   while (t--)
   {
   sum1=0;
   sum2=0;
    cin>>n;
    if(n%4 !=0){
        cout<<"NO"<<endl;
    }
    else{
        cout << "YES" << endl;
        forc(i, 2, n+1, 2)
        {
            cout<<i<<" ";
            sum1+=i;
        }
        forc(i,1,n-2,2){
            cout<<i<<" ";
            sum2+=i;
        }
        cout<<sum1-sum2<<endl;    
    }
   }
   
   
    return 0;
}