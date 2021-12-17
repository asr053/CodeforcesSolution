#include<bits/stdc++.h>
using namespace std;
void test (){
 int n;cin>>n;
 int arr[105];
 int mark[210]={};
 int a[210];
 bool check = 1;
 for(int i=1;i<=n;i++){
     cin>>arr[i];
     mark[arr[i]]=1;
     if(arr[i]>=2*n)check=0;
 }
 if(check==0){cout<<-1<<endl;return;}
 int pointer ;
 for(int i=1;i<=n;i++){
     pointer = arr[i];pointer++;
     while(pointer<=2*n && mark[pointer]==1)pointer++;
     if(pointer==2*n+1){check=0;break;}
     mark[pointer]=1;
     a[2*i-1]=arr[i];
     a[2*i]=pointer;
 }
 if(check==0){cout<<-1<<endl;}
 else{
     for(int i=1;i<=n;i++){
         cout<<a[2*i-1]<<" "<<a[2*i]<<" ";
     }
     cout<<endl;
 }
}
using namespace std;
int main(){
    int t ;cin>>t;
    while(t--){
     test();
    }
    return 0;
    
}