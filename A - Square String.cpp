#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (s.length() % 2 != 0)
            cout << "NO\n";
        else
        {
            string a, b;
            for (int i = 0; i < s.length() / 2; i++)
                a += s[i];
            for (int i = s.length() / 2; i < s.length(); i++)
                b += s[i];
            if (a == b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}