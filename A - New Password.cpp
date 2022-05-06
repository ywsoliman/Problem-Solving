#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s = "";
    for (int i = 0; i < k; i++) {
        s += char(97 + i);
    }
    for (int i = 0; i < n - k; i++) {
        s += s[i];
    }
    cout << s;
    return 0;
}