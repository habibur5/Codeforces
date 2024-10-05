/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    char arr[10][10];
    while(t--){
        int a=0,b=0,c=0,d=0,e=0;
        for (int i = 0; i <10; i++)
        {
            for(int j=0; j<10; j++){
                cin>>arr[i][j];
                if(i==0 || i==9 || j==0 || j==9){
                    if(arr[i][j] == 'X'){
                        a+=1;
                    }
                }else if(i==1 || i==8 || j==1 || j==8){
                    if(arr[i][j] == 'X'){
                            b+=1;
                        }
                }else if(i==2 || i==7 || j==2 || j==7){
                    if(arr[i][j] == 'X'){
                            c+=1;
                        }
                }else if(i==3 || i==6  || j==3 || j==6){
                    if(arr[i][j] == 'X'){
                            d+=1;
                        }
                }
                else if(i==4 || i==5  || j==4 || j==5){
                    if(arr[i][j] == 'X'){
                            e+=1;
                        }
                }
            }
        }
        cout<<((a*1) +( b*2) + (c*3) + (d*4) + (e*5))<<endl;;
        
    }
    return 0;
}