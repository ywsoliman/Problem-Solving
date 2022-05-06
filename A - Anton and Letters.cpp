#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if (s == "{}")
        cout << "0";
    else
    {
        unordered_set<char> cset;
        for (char c : s) {
            if (c == ' ' || c == '{' || c == '}' || c == ',')
                continue;
            cset.insert(c);
        }
        cout << cset.size();
    }
    return 0;
}