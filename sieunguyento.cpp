#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

bool snt(int n) {
    if (n<2)
        {return false;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool ssnt(int n) {
    if (!snt(n)) {
        return false;
    }
    while (n > 0) {
        if (!snt(n)) {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main(){
    write("test.out");
    // for(int i =0;i<=1000;i++){
    //     if(ssnt(i)){
    //         cout<<i<<' ';
    //     }
    // }
    cout<<snt(3)<<endl;
}