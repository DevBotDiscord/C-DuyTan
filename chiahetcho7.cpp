#include <bits/stdc++.h>

using namespace std;

#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

bool chiahet7(int n){
	string sokt= to_string(n);
	int tong=0;
	int k = sokt.length();
	int a[k+1];
	while (n > 0) {
		a[k--] = n % 10;
		n /= 10;
	}
	k = sokt.length();
	for (int j = 1; j < k+1; j++) {
		tong+=j *a[j];
	}
	if(tong%7==0){
		return true;
	}else return false;
}


void xulidulieu(string n){
	int pos=n.find("?");
	n.erase(pos,1);
	int kq;
	if(pos==0){
		for(int i=1;i<10;i++){
			// if (pos >= n.length()) {
			//     n = n+to_string(i);
			// }else 
			n.insert(pos,to_string(i));
			int a = stoi(n);
			bool check = chiahet7(a);
			if(check) {
				kq = i;
				break;
			} else {
				n.erase(pos);
			}
		}
	}else {
		for(int i=0;i<10;i++){
			// if (pos >= n.length()) {
			//     n = n+to_string(i);
			// }else 
			n.insert(pos,to_string(i));
			int a = stoi(n);
			bool check = chiahet7(a);
			if(check) {
				kq = i;
				break;
			} else {
				n.erase(pos);
			}
		}
	}
	
	cout << kq;
}

int main(){
	read("chiahetcho7.inp");
	write("chiahetcho7.out");
	string n;
	getline(cin,n);
	xulidulieu(n);
	return 0;
}