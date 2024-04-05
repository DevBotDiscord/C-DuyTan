#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

int main() {
  read("test.inp");
  write("test.out");
  int n;
  cin >> n;
  // n = n * 3;
  int x[n];
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < n; i += 3) {
    int a = x[i];
    int b = x[i + 1];
    int c = x[i + 2];
    if ((a - b + c) != 0 && ((b * b - 4 * a * c) != 0) && a != 0) {
      ++count;
    }
  }
  cout << count;
}
