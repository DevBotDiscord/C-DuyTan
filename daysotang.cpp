#include <iostream>
#include <string.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)
#define max 100000
#define FOR(i,a,b) for(int i=a;i<b;i++)

void sapxep(int a[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp= a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    read("sapxep.inp");
    write("sapxep.out");
    int a[1000];
    string row1,row2;
    getline(cin,row1);
    getline(cin,row2);
    // cout << row1<<endl<<row2;
    int pos=0,i=0;
    pos = row1.find(" ");
    int s=row1.size();
    while(pos<s){
        string so= row1.substr(0,pos);
        a[i]=stoi(so);
        i++;
        row1.erase(0,pos+1);
    }
    cout<<a[1]<<endl;
    return 0;
}