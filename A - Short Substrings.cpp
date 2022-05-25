#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        string res = "";
        for (int i = 0; i < s.length(); i += 2)
            res += s[i];
        res += s[s.length() - 1];
        cout << res << "\n";
    }
    return 0;
}