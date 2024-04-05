#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

int main() {
  read("test.inp");
  write("test.out");
  int n, m;
  cin >> n >> m;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    // cout << a[i] << " " << b[i] << endl;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int tong = b[i] + b[j];
      if (tong == m) {
        cout << a[i] << " " << a[j] << endl;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        int tong = b[i] + b[j] + b[k];
        if (tong == m) {
          cout << a[i] << " " << a[j] << " " << a[k];
        }
      }
    }
  }
}
