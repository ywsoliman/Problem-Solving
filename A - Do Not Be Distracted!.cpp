#include <iostream>

using namespace std;

int main()
{

    int t; cin >> t;
    int n;
    string s;
    while (t--)
    {
        string temp = "";
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[i + 1])
                temp += s[i];
        }
        bool flag = true;
        for (int i = 0; i < temp.length(); i++) {
            int ctr = 0;
            for (int j = i; j < temp.length(); j++) {
                if (temp[i] == temp[j])
                    ctr++;
            }
            if (ctr > 1) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}