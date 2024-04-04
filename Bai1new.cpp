#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

void xuli() {
  read("test.inp");
  write("test.out");
  int a, b;
  cin >> a >> b;
  int n[a], m[b];
  for (int i = 0; i < a; i++) {
    cin >> n[i];
    cout << n[i] << " ";
  }
  for (int i = 0; i < b; i++) {
    cin >> m[i];
  }
  int x = sizeof(n) / sizeof(n[0]);

  // Tạo mảng đếm số lần xuất hiện của mỗi phần tử
  int dem[100] = {0};
  for (int i = 0; i < x; i++) {
    dem[n[i]]++;
  }

  // Tìm phần tử có số lần xuất hiện nhiều nhất
  int maxdem = 0;
  int kq = n[0];
  for (int i = 0; i < x; i++) {
    if (dem[n[i]] > maxdem) {
      maxdem = dem[n[i]];
      kq = n[i];
    }
  }
  cout << kq << " " << maxdem << endl;
}

int main() {
  xuli();
  return 0;
}
