#include<iostream>
using namespace std;
bool largest(int arr[],int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++)
        for(int k=j+1;k<n;k++)if(arr[i]*100+arr[j]*10+arr[k]>154)return false;
    }
    return true;
}
void solve(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int v[]={1,5,4};
    int count = 0;
    for(int i=0;i<n;i++){if(count<3 && arr[i]==v[count])count++;if(count==3)break;}
    if(count==3 && largest(arr,n))cout<<"true"<<endl;
    else cout<<"false"<<endl;
}
int main(){
    solve();
}