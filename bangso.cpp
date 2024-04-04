#include <bits/stdc++.h>
#define read(file) freopen(file,"r",stdin);
#define write(file) freopen(file,"w",stdout);
using namespace std;
int main()
{
    read("bangso.inp");
    write("bangso.out");
    int n, x;
    cin >> n >> x;
    int a[n][n];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = (i + 1) * (j + 1);
            if (a[i][j] == x)
            {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}