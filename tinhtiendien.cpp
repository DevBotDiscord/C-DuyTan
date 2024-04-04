#include <iostream>

using namespace std;

int main(){
    int tientrc,tiensau,kwsd,kwsd1,kwsd2,kwsd3,tiendien;
    cout<<"Nhap tien dien thang trc:"<< endl;
    cin >> tientrc;
    cout<<"Nhap tien dien thang sau:"<< endl;
    cin >> tiensau;
    kwsd = tiensau-tientrc;
    if (kwsd>0&&kwsd<=100){
        tiendien=kwsd*1500;
    }else if(kwsd>100&&kwsd<=200){
        kwsd1=kwsd-100;
        tiendien=kwsd1*2000+100*1500;
    }else if(kwsd>200&&kwsd<=300){
        kwsd1 = kwsd-200;
        tiendien=kwsd1*3000+100*2000+100*1500;
    }else if(kwsd<300){
        kwsd1 = kwsd-300;
        tiendien=kwsd1*4000+100*3000+100*2000+100*1500;
    }
    if(kwsd<=0){
        cout<<"Thang nay m KO o nha a"<<endl;
    }else{
        cout<<"Thang nay xung cong quy EVN: "<<tiendien<<endl;
    }
    return 0;
}
