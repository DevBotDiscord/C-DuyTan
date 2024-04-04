#include <iostream>

using namespace std;

bool check_snt(int n) {
    if (n<2)
        {return false;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}        
void prime_in_array(){
    int s=0;
    int a[10]={3,5,7,12,8,7,6,9,7,5};
    for(int i=0;i<10;i++){
        if (check_snt(a[i]))
        {
            cout<<a[i]<<endl;
            s=s+a[i];
        }
        
    }
    cout<<"Prime Sum:"<<s<<endl;
}
int main(){
    prime_in_array();
    return 0;
}