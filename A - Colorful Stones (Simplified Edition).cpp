#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    string t; cin >> t;
    int pos = 1;
    for (char c : t) {
        if (c == s[pos - 1])
            pos++;
    }
    cout << pos;
    return 0;
}