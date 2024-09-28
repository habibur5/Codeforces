#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        int index;
        for(int i=0;i<n;i++){
            cin>>arr[i];      
        }
        for (int i = 1; i < n; i++)
        {
            if(arr[i-1] !=arr[i]){

                if(arr[i-1] ==arr[i+1] ){
                    index = i+1;
                    break;
                }
                else if (arr[i] == arr[i + 1]){
                    index = i;
                    break;

                }else{
                    index = i+1;
                    break;

                }
            }
        }

        cout<<index<<endl;
    }
    

    return 0;
}