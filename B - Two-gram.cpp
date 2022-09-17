#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = INT_MIN;
    int total = 0;
    string res;

    for (int i = 0; i < n - 1; i++) {
        string temp = s.substr(i, 2);
        for (int j = i; j < n - 1; j++) {
            if (temp == s.substr(j, 2))
                total++;
        }
        if (mx < total) {
            mx = total;
            res = temp;
        }
        total = 0;
    }
    cout << res << "\n";
    return 0;
}