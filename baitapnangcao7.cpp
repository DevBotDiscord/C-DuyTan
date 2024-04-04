#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

int main() {
  int a[100], b[100];
  int n, m;

  read("baitap7.inp");
  write("baitap7.out");
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (b[i] + b[j] == m) {
        cout << "Xe: " << a[i] << "," << a[j] << endl;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (b[i] + b[j] + b[k] == m) {
          cout << "Xe: " << a[i] << "," << a[j] << "," << a[k] << endl;
        }
      }
    }
  }

  return 0;
}
