#include <iostream>
#include <string>

using namespace std;

void nhapmang(string a[],int n){
	for(int i=0; i<n; i++)
	{
		cout<<"Phan tu thu "<< i <<": ";
		cin>> a[i];
	}

}
void xet_mang(string a[],int n,string khoi,string mon){
    for(int i=0; i<n; i++){
        if(khoi==""&& mon==""){
            cout<< a[i] <<endl;
        }
        if(khoi!=""&&mon==""){
            if(a[i].find(khoi)==0){
                cout<<"Cac lop "<<khoi<<" la:"<< a[i] <<endl;
            }
        }
        if(khoi==""&&mon!=""){
            if(a[i].find(mon)==2){
                cout<<"Cac lop co hoc mon "<<mon<<" la:"<< a[i] <<endl;
            }
        }
        if(khoi!="" && mon!=""){
            if(a[i].find(khoi)==0 && a[i].find(mon)==2){
                cout<<"Cac lop "<<khoi<<" co hoc mon "<<mon<<" la:"<< a[i] <<endl;
            }
        }
    }
}
void xuatMang(string a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
    cout << endl;
}

int vitrilop(string a[], int n, string x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			return i;
	}
	
	return -1;
}
void thaythelop(string a[],int n,int vitri,string moi){
    if (vitri!=-1)
    {
    if (vitri >= 0 && vitri < n)
        {
            for (int i = vitri; i < n - 1; i++)
                {a[i] = a[i + 1];
                n--;}
        }
    if (vitri >= 0 && vitri <= n)
	{
		for (int i = n; i > vitri; i--)
			{a[i] = a[i - 1];
		    a[vitri] = moi;
            // cout<<a[vitri]<<endl;
		    n++;}
	}
    }
    else{cout<<"Loi"<<endl;}
    xuatMang(a,n);  
    cout<<endl;
}
int main(){
    // string a[MAX_PATH];

    int n;
    // cout<<"Nhap so phan tu cua mang: ";
    // cin>>n;
    n=5;
    string a[5]={"10PE1","10PE2","10IE2","12IE3","10IE1"};
    int vitri = vitrilop(a,n,"12IE3");
    thaythelop(a,n,vitri,"11PE1");

    // cout<<endl;
    // nhapmang(a,n);
    xet_mang(a,n,"10","");
    xet_mang(a,n,"","IE");
    xet_mang(a,n,"10","IE");
    return 0;
}