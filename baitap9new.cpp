#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin);
#define write(file) freopen(file, "w", stdout);

int main() {
  read("baitap9.inp");
  write("baitap9.out");
  string a;
  cin >> a;
  int dem = 0;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == 'x') {
      dem++;
    }
  }
  cout << dem;
  return 0;
}
