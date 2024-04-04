#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#define max 1000000
#define FOR(i,a,b) for(int i=a;i<b;i++)


int main() {
    read("daykt.txt");
    write("daykt_o.txt");
    int n;
    cin >> n;
    int a[n], b[n];
    b[0] = 1;
    int res = 1, start = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            b[i] = b[i - 1] + 1;
        } else {
            b[i] = 1;
        }
        if (res < b[i]) {
            res = b[i];
            start = i - res + 1;
        }
    }

    for (int i = start; i < start + res; i++) {
        cout << a[i] << " ";
    }

    return 0;
}