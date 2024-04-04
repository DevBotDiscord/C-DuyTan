#include <iostream>

using namespace std;

void sapxep(int a[10]){
    int temp=0;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<10;i++){
        if(a[i]%2!=0)
        {cout<<a[i]<<" ";}
    }
}
int main(){
    int a[10]={3,5,7,12,8,7,6,9,7,25};    
    sapxep(a);
    return 0;
}