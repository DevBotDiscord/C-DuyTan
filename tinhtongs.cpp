#include <iostream>

using namespace std;

int main(){
    int s=0;
    int n;
    cout<<"Nhap so n:"<< endl;
    cin>>n;
    for(int i=1;i<=n; i++)
    {
        s=s + i;
    }
    cout<<"Tong tu s1 toi sn la: "<<s<<endl;
}