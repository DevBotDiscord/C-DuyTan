#include <bits/stdc++.h>
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)


using namespace std;

void to_upper(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

string xoa(string s) {
  // Loại bỏ khoảng trắng ở đầu và cuối chuỗi
  s.erase(0, s.find_first_not_of(' '));
  s.erase(s.find_last_not_of(' ') + 1);

  // Duyệt qua từng ký tự trong chuỗi
  for (int i = 0; i < s.length(); i++) {
    // Nếu gặp 2 khoảng trắng liên tiếp
    if (s[i] == ' ' && s[i + 1] == ' ') {
      // Xóa khoảng trắng thứ hai
      s.erase(i + 1, 1);
      // Giảm i đi 1 để tránh bỏ sót ký tự tiếp theo
      i--;
    }
  }

  return s;
}

int main()
{
    read("Bai2.inp");
    write("Bai2.out");
    string n;
    getline(cin,n);
    n=xoa(n);
    to_upper(n);
    cout<<n;
}