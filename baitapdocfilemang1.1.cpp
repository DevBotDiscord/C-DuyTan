#include <bits/stdc++.h>

using namespace std;

int tong(int a[],int n){
    int tong=0;
    for(int i=1;i<n;i++){
        tong+=a[i];
    }
    return tong;
}

int main(){
    freopen("tong.inp","r",stdin);
    freopen("tong.out","w",stdout);
    int n,t;
    int a[_MAX_PATH];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<",";
    }
    t = tong(a,n);
    cout<<"tong="<<t;
    return 0;
}