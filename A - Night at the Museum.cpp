#include <iostream>

using namespace std;

int main()
{
    char letter[26] = {
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
            't', 'u', 'v', 'w', 'x','y', 'z'
    };
    string s; cin >> s;
    int x = 0;
    int total = 0;
    for (char c : s) {
        total += min(abs(c - letter[x]), 26 - abs(c - letter[x]));
        x = c - 'a';
    }
    cout << total;

    return 0;
}