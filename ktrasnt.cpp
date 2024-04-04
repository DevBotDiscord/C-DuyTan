#include <iostream>

using namespace std;

int snt(int n) {
    if (n<2)
        {return 0;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return 0;
    }
    return n;
}

int main() {
    int n,snt1;
	cout << "Nhap so n: ";
    cin >> n; 
    for (int i = 1; i <=n ; i++) {
        snt1=snt(i);
        if(snt1>0){
            cout << snt1 << endl;
        }
    }

    return 0;
}