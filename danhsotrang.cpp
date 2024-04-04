#include <bits/stdc++.h>

using namespace std;

int main()
{
    string h = "";
    int n = 3;
    int Size = 10;
    int flag = -1;
    for (int i = 4; i <= 10000 ; i++)
    {
        h += to_string(i);
        if (h.size() == n)
        {
            flag = i;
        }
    }
    cout << flag;
    return 0;
}