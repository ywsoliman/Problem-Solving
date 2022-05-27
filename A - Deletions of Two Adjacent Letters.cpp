#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    string s;
    char c;
    while (t--)
    {
        cin >> s;
        cin >> c;
        if (s.length() == 1 && s[0] == c)
            cout << "YES\n";
        else if (s.length() == 1 && s[0] != c)
            cout << "NO\n";
        else
        {
            bool flag = false;
            for (int i = 0; i < s.size(); i++) {
                if (i % 2 == 0 && i != s[s.size() - 2]) {
                    if (s[i] == c) {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}