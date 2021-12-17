#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define test int t; cin>>t; while(t--)
#define pb push_back
#define ll long long int
#define vi vector<int>
#define mp make_pair
#define pii pair<int, int>
#define f0 for(int i=0; i<n; i++)
#define f1 for(int i=1; i<=n; i++)
#define rf0 for(int i=n-1; i>=0; i--)
#define rf1 for(int i=n; i>=1; i--)
#define mod 1000000007
 
int main()
{
    fast
    test{
        ll n; cin>>n;  ll ans=INT_MIN; 
     vector<ll> v; vector<ll> vc; 
     f0{
         int x; 
         cin>>x ; 
         v.push_back(x); 
     }
     while(v.size()){
       
        ll mini=*min_element(v.begin(),v.end()); 
         ans=max(mini,ans);
         for(int i=0; i<v.size(); i++){
          v[i]-=mini; 
         }
         
         for(int i=0; i<v.size(); i++){
             if(v[i]!=0)  vc.push_back(v[i]); 
         }
         v.clear(); 
         for(int i=0; i<vc.size(); i++){
             v.push_back(vc[i]); 
         }
         vc.clear(); 
     }
     cout<<ans<<endl; 
    }
    return 0;
}