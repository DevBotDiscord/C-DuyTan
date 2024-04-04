#include <bits/stdc++.h>
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
using namespace std;



int main(){
    // read("kytuso.inp");
    // write("kytuso.out");
    string a="13a7b48cb7sidf78s7d6f86sd8f7s87d6f87s6df87d9e68f7";
    string kq=" ";
    for (int i = 0; i < a.length(); i++) {
    if (isdigit(a[i])) {
      kq += a[i];
        }
    }
    cout<<kq<<endl;
    
}