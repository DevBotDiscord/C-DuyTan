#include <bits/stdc++.h>

#include <cctype>
#include <string>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

int main() {
  read("test.inp");
  write("test.out");
  string n;
  getline(cin, n);
  string kq;
  for (int i = 0; i < n.length(); i++) {
    if (isdigit(n[i])) {
      kq += n[i];
    }
  }
  cout << kq << endl;
}
