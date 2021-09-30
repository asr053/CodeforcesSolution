// Har_Har_Mahadev

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     int t;
    cin>>t;
    while (t--)
    {
      string s;
      cin>>s;
      ll count1 = 0 , count2 = 0;
      for(ll i=0;i<s.size();i++){
          if(s[i]=='A')count1++;
          else if(s[i]=='B' && count1>0)count1--;
          else if(s[i]=='B')count2++;
      }
      cout<<count1+(count2%2)<<endl;
    }
    return 0;
}
