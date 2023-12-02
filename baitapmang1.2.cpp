#include <iostream>

using namespace std;

int check_snt(int n) {
    if (n<2)
        {return 0;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return 0;
    }
    if(n>0)
    {return n;}
}        
void prime_in_array(){
    int s=0;
    int a[10]={3,5,7,12,8,7,6,9,7,5};
    for(int i=1;i<10;i++){
        check_snt(a[i]);
    }
}
int main(){
    prime_in_array();
    return 0;
}