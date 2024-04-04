#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#define max 1000000
#define FOR(i,a,b) for(int i=a;i<b;i++)

int main(){
    read("tong.inp");
    write("tong.out");
    // int b[3]={9,8,12};
    int n_b;
    int n;
    cin>>n;
    cin>>n_b;
    int a[n];
    int b[n_b];
    FOR(i,0,n){
        cin>>a[i];
    };
    FOR(i,0,n){
        cin>>b[i];
    };
    string str_a=",";
    FOR(i,0,n){
        if(i<n-1){
            str_a+=to_string(a[i])+",";
        }
        else {str_a+=to_string(a[i]);}
    };
    string str_b=",";
    FOR(i,0,n_b){
        if(i<n_b-1){
            str_b+=to_string(b[i])+",";
        }
        else {str_b+=to_string(b[i]);}
    }
    
    int vitri= str_a.find(str_b);
    int dem=0;
    while (vitri!=-1){
        if(vitri!=-1){
            vitri= str_a.find(str_b,vitri+1);
            dem += 1;
        }
        else {
            break;
        }
    }
    if(dem!=0){
        cout<<"Mang b xuat hien trong mang a: "<< dem << " lan"<<endl;
    }
    else cout <<"Ko tim thay" << endl;
    return 0;
}