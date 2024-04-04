#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n = 4;
    string a[_MAX_PATH] = {"Pham Thanh Kien", "Ho Thanh Phuong", "Ho An Phuc", "Nguyen Minh An"};

    for (int i = 0; i < n; i++) cout << a[i] << "\n";

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        string s = a[i];
        int vt = s.find(' ');
        while (vt <= s.size() || vt != -1)
        {
            s.erase(0, vt + 1);
            vt = s.find(' ');
        }
        if (s == "An") cout << a[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        string s = a[i];
        int vt = s.find(' ');
        string res = s.substr(0, vt);
        cout << res << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        string s = a[i];
        int vt = s.find(' ');
        while (vt <= s.size() || vt != -1)
        {
            s.erase(0, vt + 1);
            vt = s.find(' ');
        }
        cout << s << endl;
    }

    return 0;
}
