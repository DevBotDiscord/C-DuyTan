#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file,"r",stdin)
#define write(file) freopen(file,"w",stdout)

int main(){
    write("test.out");
    int  M=1000;//max 
    int n=4,m=5;
    int d[4]={0,M,M,M};//khoi tao khoang cach
    int p[4]={0,0,0,0};//da xu li hay chua
    int v = n - 1;

    int trace[4]={-1,-1,-1,-1};//pos

    //thong tin cac canh va do dai
    int eu[5]={0,0,2,2,3};
    int ev[5]={2,3,1,3,1};
    int ew[5]={1,4,3,2,2};


    int ubest, Min;
    for (int i=0;i<n;i++)
    {
        M=1000;
        for (int u=0;u<n;u++)
        {
            if(d[u]<M && p[u]==0)
            {
                ubest = u;
                Min = d[u];
            }
        }
        int u=ubest;
        p[u]=1;


        for (int j=0;j<m;j++)
        {
            if(eu[j]==u)
            {
                int v=ev[j];
                int w=ew[j];
                if (d[v]>d[u]+w)
                {
                    d[v]=d[u]+w;
                    trace[v]=u;
                }
            }
        }

    }

    string sd,sp,strace="";
    for (int k=0;k<4;k++)
    {

        cout<<d[k]<<" ";

    }
    cout<<endl;
    for (int v = n - 1; v >= 0; v = trace[v]) {
        cout << v << " ";
    }
    // cout << 0 << endl;

  return 0;
}