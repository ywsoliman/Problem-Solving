#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    bool accidentCaps = true;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] > 90) {
            accidentCaps = false;
            break;
        }
    }
    if (!accidentCaps)
        cout << s;
    else
    {
        if (s[0] > 90)
            s[0] -= 32;
        else
            s[0] += 32;
        for (int i = 1; i < s.size(); i++)
            s[i] += 32;
        cout << s;
    }
    return 0;
}