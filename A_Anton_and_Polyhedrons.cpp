#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,faces=0;
    cin>>n;

    string arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(auto it:arr){
        if (it == "Tetrahedron"){
            faces+=4;

        }
        else if (it == "Cube"){
            faces+=6;
        }
        else if (it == "Octahedron"){
            faces+=8;
        }
        else if (it =="Dodecahedron"){
            faces+=12;
        }
        else{
            faces+=20;
        }
    }
    cout<<faces<<endl;

    return 0;
}