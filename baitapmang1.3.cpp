#include <iostream>
#include <math.h>

using namespace std;

/// @param n 
/// @return 
bool check_scp(int n){
    int a;
    a=sqrt(n);
    if(a*a==n){
        return true;
    }else{
    return false;
    }
}    
void scp_in_array(int a[10]){
    int s=0;
    int s1=0;

    for(int i=0;i<10;i++){
        if (check_scp(a[i]))
        {
            cout<<a[i]<<endl;
            s=s+a[i];
        }
        s1=s1+a[i];
    }
    cout<<"SCP Sum:"<<s<<endl;
    cout<<"Array Sum:"<<s1<<endl;
}
int main(){
    int a[10]={3,5,7,12,8,7,6,9,7,25};
    scp_in_array(a);
    return 0;
}