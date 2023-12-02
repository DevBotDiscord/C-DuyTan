#include <iostream>

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
int main(){
    int a[10]={3,5,7,12,8,7,6,9,7,5};
    int tong=a[1]+a[3]+a[5]+a[7]+a[9];
    cout<<tong<<endl;
    s = tong_le(a);
    return 0;
}