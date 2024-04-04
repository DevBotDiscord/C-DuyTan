#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#define max 1000000
#define FOR(i,a,b) for(int i=a;i<b;i++)


int main(){
    read("daykt.txt");
    write("daykt_o.txt");
    int n;
    cin >> n;
    int a[n],b[n];
    int m = b[0];
    int vt = 0;
    for(int i=0; i < n; i++) {
        cin >> a[i];
        b[i] = 1;
    }
    // tim day con tang va luu vao mang b
    //mang b luu do dai cua cac day con tang
    for(int i=n-1; i>0; i--) {
        if(a[i] >= a[i-1]) {
            b[i-1] += b[i];
        }
    }
    // tim do dai day con dai nhat
    // tim gia tri lon nhat trong mang b roi luu vao m
    for (int i=1; i<n; i++) {
        if(m < b[i]) m = b[i];
    }
    // tim vi tri bat dau cua day con dai nhat trong mang a
    for (int i = 0; i < n; i++) {
        if(b[i] == m) vt = i;
    }
    // in ra day con dai nhat
    for (int i = vt; i < vt + m; i++) {
        cout << a[i] << " ";
    }
    return 0;
}