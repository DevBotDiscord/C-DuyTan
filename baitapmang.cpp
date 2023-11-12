#include<iostream>

using namespace std;

int main(){
    int tong=0;
    int a[4]={8,6,5,3};
    for(int i=0;i<4;i++){
        tong = tong+a[i];
    }
    cout<<tong<<endl;
    return 0;
}