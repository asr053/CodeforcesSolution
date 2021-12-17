// Har_Har_Mahadev

#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;

bool rule1 (string s){
   
    return (s[0]=='6' || s[0]=='7' || s[0]=='8' || s[0]=='9' );
}
bool rule3(string s){
    map<char,char>k;
    for(int i=0;i<s.size();i++){
        k[s[i]]++;
    }
   
    for(auto it:k){
        if(it.second>7)return false;
    }
    return true;
}
bool rule4(string s){
    int count = 1;
    int size = 1;
   
    for(int i=1;i<s.size();i++){
              if(s[i]==s[i-1])count++;
              else count = 1;
              size = max(size,count);
    }
    return(size<=5);
}

int main()
{
     int t;
   t = 1;
    while (t--)
    {
      string s;
      cin>>s;
      bool a = rule1(s) && s.size()==10;
      bool b = rule3(s) && rule4(s);
      if(a&b)cout<<"valid"<<endl;
      else cout<<"invalid"<<endl;
     

    }
    return 0;
}
