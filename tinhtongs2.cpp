# include <iostream>

using namespace std;

int tong_so_le(int n){
    int s=0;
    int a;
    for(int i=1;i<=n;i++)
    {
        a=i%2;
        if(a!=0){
            s=s + i;
        }
    }
    return s;
}
    
int main(){
    int n,a,tong;
    cout<<"Nhap so n:"<< endl;
    cin>>n;
    tong = tong_so_le(n);
    cout<<"Tong so le tu 1 toi n: "<<tong<<endl;
    return 0;
}