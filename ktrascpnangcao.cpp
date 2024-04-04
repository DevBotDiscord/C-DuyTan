#include <bits/stdc++.h>

#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

using namespace std;

int snt(int n) {
    if (n<2)
        {return 0;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return 0;
    }
    return n;
}
bool scpdb(int n){
    int a;
    a =snt(a);
    if(a>0)
    {
    a=sqrt(n);
    if(a*a==n){
        return true;
    }else{
        return false;
    }
    }
}
int main(){
    read("scp.inp");
    write("scp.out");
    int n,m,dem,temp;
    cin>>n>>m;
    for(int i= n;i<m;i++){
        temp=snt(i);
        if(temp>0){
            bool check=scp(i);
            if(check==true){
                dem++;
            }
        }        
    }
    cout<<dem;
}