#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
   getline(cin,s);
    map<string,int>mp;
    vector<string>v;
    string k = "";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            v.push_back(k);
            k.clear();
        }else{
           k+=s[i];
          
        }
    }
    if(k.size()!=0)v.push_back(k);
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    for(long long i=0;i<v.size();i++){
        if(mp[v[i]]>=2) {
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
            mp[v[i]]=0;
        }
    }
    return 0;
}
