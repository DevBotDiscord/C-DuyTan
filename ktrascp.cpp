#include <iostream>
#include <math.h>

using namespace std;

bool scp(int n){
    int a;
    a=sqrt(n);
    if(a*a==n){
        return true;
    }else{
    return false;
    }
}

int main() {
    int n;
	cout << "Nhap so n: ";
    cin >> n;

	cout << "So chinh phuong tu 1 toi " << n << " la: "<< endl;

    for (int i = 1; i <=n ; i++) {
        if (scp(i))
            cout << i <<endl;
    }

    return 0;
}