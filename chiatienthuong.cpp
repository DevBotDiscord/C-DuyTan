#include <bits/stdc++.h>
using namespace std;

#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

int main() {
	read("tien.inp");
	write("tien.out");
	int n,tong,temp;
	string kq2;
	tong=0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tong+=a[i];
	}
	int max,tong1,pos=0;
	string kq;
	if(tong%2==0){
		tong=tong/2;
		cout<<tong<<endl;
		for(int i=0;i<n;i++){	
			tong1+=a[i];
			cout<<a[i]<<" ";
			if(tong1==tong){
				pos=i;
				break;
			}
		}
		cout<<endl;
		for(int i=pos+1;i<n;i++){
			cout<<a[i]<<" ";
		}
	}else {
		for(int j=0;j<n;j++){
			int tong1=tong-a[j];
			if(tong1%2==0){
				// tong = tong/2;
				if(tong1>max){
					max=tong1;
					temp=a[j];
				}
			}
		}
		cout<<max/2<<endl;
		for(int k=0;k<n;k++){
			tong1+=a[k];
			cout<<a[i]<<" ";
			if(tong1>=max/2){
				pos=i;
				break;
			}
		}
		cout<<endl;
		for(int i=pos;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<kq<<endl;
		cout<<temp;
	}
	return 0;
}
