#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    char x = 'a';
    int total = 0;
    for (char c : s) {
        total += min(abs(c - x), 26 - abs(c - x));
        x = c;
    }
    cout << total;

    return 0;
}