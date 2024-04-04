#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

int main(){
    read("bt9.inp");
    write("bt9.out");
    string n;
    cin>>n;
    int count=0;
    for(int i =0;i < n.length();i++){
        if(n[i] =='x'){
            count++;
        }
    }
    cout<<count;
}