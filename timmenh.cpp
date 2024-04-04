#include <string>
#include <iostream>
using namespace std;
int main(){
    int x,y,ns,z,can,chi;
    string tuoi,menh =" ";
    cout << "Nhap ns cua ban: " ;
    cin >> ns;
    x = ns%10;
    y = ns%12;
    if(x==0){
        tuoi="Canh";
        can=4;
    }
    if(x==1){
        tuoi="Tan";
        can=4;
    }
    if(x==2){
        tuoi="Nham";
        can=5;
    }
    if(x==3){
        tuoi="Quy";
        can=5;
    }
    if(x==4){
        tuoi="Giap";
        can=1;
    }
    if(x==5){
        tuoi="At";
        can=1;
    }
    if(x==6){
        tuoi="Binh";
        can=2;
    }
    if(x==7){
        tuoi="Dinh";
        can=2;
    }
    if(x==8){
        tuoi="Mau";
        can=3;
    }
    if(x==9){
        tuoi="Ky";
        can=3;
    }
    if(y==0){
        tuoi = tuoi+" Than";
        chi =1 ;
    }
    if(y==1){
        tuoi = tuoi+" Dau";
        chi =1 ;
    }
    if(y==6){
        tuoi = tuoi+" Dan";
        chi =1 ;
    }
    if(y==7){
        tuoi = tuoi+" Mao";
        chi =1 ;
    }
    if(y==4){
        tuoi = tuoi+" Tys";
        chi = 0;
    }
    if(y==5){
        tuoi = tuoi+" Suu";
        chi = 0;
    }
    if(y==10){
        tuoi = tuoi+" Ngo";
        chi = 0;
    }
    if(y==11){
        tuoi = tuoi+" Mui";
        chi = 0;
    }
    if(y==9){
        tuoi = tuoi+" Ti";
        chi = 2;
    }
    if(y==8){
        tuoi = tuoi+" Thin";
        chi = 2;
    }
    if(y==2){
        tuoi = tuoi+" Tuat";
        chi = 2;
    }
    if(y==3){
        tuoi = tuoi+" Than";
        chi = 2;
    }
    z=can+chi;
    if(z==1){
        menh="Kim";
    }
    if(z==2){
        menh="Thuy";
    }
    if(z==3){
        menh="Hoa";
    }
    if(z==4){
        menh="Tho";
    }
    if(z==5||z==6||z==7){
        menh="Moc";
    }
    cout<<"Tuoi cua ban la: "<< tuoi << endl;
    cout<<"Menh cua ban la: "<< menh << endl;
    return 0;
}