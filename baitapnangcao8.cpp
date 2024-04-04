#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

int main() {
  read("baitap8.inp");
  write("baitap8.out");
  int n;
  cin >> n;

  int count = 0;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;

    if (c % 2 == 0) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
