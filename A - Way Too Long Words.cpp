#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (s.size() <= 10) {
            cout << s << endl;
        }
        else
        {
            string res = "";
            res += s[0];
            res += to_string(s.size() - 2);
            res += s[s.size() - 1];
            cout << res << endl;
        }
    }
    return 0;
}