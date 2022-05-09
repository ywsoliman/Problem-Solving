
#include <iostream>
 
using namespace std;
 
int main()
{
    string s; cin >> s;
    bool magic = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1')
            continue;
        else if (i > 0 && s[i] == '4' && s[i - 1] == '1')
            continue;
        else if (i > 1 && s[i] == '4' && s[i - 1] == '4' && s[i - 2] == '1')
            continue;
        else {
            magic = false;
            break;
        }
    }
 
    if (magic)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}