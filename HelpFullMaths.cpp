#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s, temp;
   cin >> s;
   for (int i = 0; i < s.size(); i+=2)
   {
       for (int j = i+2 ; j < s.size(); j+=2)
       {
           if (s[i] > s[j]){
               temp[1] = s[i];
               s[i] = s[j];
               s[j] = temp[1];
           }
       }
    }
    cout<<s<<endl;
    return 0;
}