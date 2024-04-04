#include <bits/stdc++.h>

using namespace std;
#define read(file) freopen(file, "r", stdin)
#define write(file) freopen(file, "w", stdout)

int main()
{
    read("input.txt");
    write("output.txt");
    int n, maxx;
    cin >> n >> maxx;
    int a[n + 1];
    float d[n + 1], b[n + 1], c[n + 1], tam;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        d[i] = c[i] / b[i];
        // cout << d[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d[i] < d[j])
            {
                tam = d[i];
                d[i] = d[j];
                d[j] = tam;
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
                tam = b[i];
                b[i] = b[j];
                b[j] = tam;
                tam = c[i];
                c[i] = c[j];
                c[j] = tam;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] * c[i] <= maxx)
        {
            if (b[i] * c[i] > 0)
            {
                maxx = b[i];
                cout << "so kg can lay :" << b[i] << endl;
                cout << "so luong can lay :" << c[i] << endl;
                cout << "tong so kg la : " << b[i] * c[i] << endl;
            }
        }
    }
}