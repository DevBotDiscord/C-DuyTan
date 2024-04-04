#include <iostream>
#include <string>

using namespace std;

int main(){
    float toan,ly,hoa,tin,dtb;
    string xl;
    cout << "Nhap diem mon toan" << endl;
    cin >> toan;
    cout << "Nhap diem mon hoa" << endl;
    cin >> hoa;
    cout << "Nhap diem mon li" << endl;
    cin >> ly;
    cout << "Nhap diem mon tin" << endl;
    cin >> tin;
    dtb = (toan + hoa + ly + tin) / 4;
    if (dtb >= 8){
        xl = "HS gioi";
    }
    else if(dtb >= 6.5 && dtb < 8){
        xl = "HS kha";
    }
    else if(dtb >= 5 && dtb < 6.5){
        xl = "HS TB";
    }
    else{
        xl = "HS Yeu";
    }
    cout << "Ban duoc hoc sinh: " << xl << endl;
    return 0;
}