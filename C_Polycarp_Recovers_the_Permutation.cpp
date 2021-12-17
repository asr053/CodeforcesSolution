#include <bits/stdc++.h>
#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define lli unsigned long long int
#define   ll signed long long int
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define fori(i,n) for(int j=i;j<n;j++)
#define pb push_back
#define ff first
#define ss second
#define pp pair<int,int>
#define mod  1000000007
using namespace std;
bool isV(char ch)
{
return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
void tc()
{
          
int n,m,x;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)
cin>>v[i];

if(v[0]!=n&&v[n-1]!=n)
{
    cout<<-1<<"\n";return;
}

reverse(all(v));
for(int i=0;i<n;i++)
{
    cout<<v[i]<<" ";
}
cout<<"\n";          
                     
}
int main()
{
IOS;
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
     
lli q; cin>>q; while(q--)
                      
tc();
                                   
      
return 0;
}