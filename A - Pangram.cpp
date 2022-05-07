#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    bool flag = true;

    if (s.length() < 26)
        flag = false;
    else
    {
        transform(s.begin(), s.end(),s.begin(), ::toupper);

        bool letterExist[26];

        for (int i = 0; i < n; i++) {
            int ascii = (int)s[i] - 65;
            letterExist[ascii] = true;
        }

        for (int i = 0; i < 26; i++) {
            if (letterExist[i] == false) {
                flag = false;
                break;
            }
        }
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
