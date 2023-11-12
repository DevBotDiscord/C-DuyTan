#include <iostream>

using namespace std;

bool snt(int n) {
    if (n<2)
        {return false;}
    for (int i = 2; i<n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
	cout << "Nhap so n: ";
    cin >> n;

	cout << "So nguyen to tu 1 toi " << n << " la: "<< endl;

    for (int i = 1; i <=n ; i++) {
        if (snt(i))
            cout << i <<endl;
    }

    return 0;
}