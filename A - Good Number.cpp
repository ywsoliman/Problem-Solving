#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int goodNumbers = 0;

    for (int i = 0; i < n; i++) {

        bool digits[15]{0};
        string s; cin >> s;

        for (char c : s) {
            digits[c - '0'] = 1;
        }

        bool good = true;

        for (int j = 0; j <= k; j++) {
            if (digits[j] == 0) {
                good = false;
                break;
            }
        }

        if (good)
            goodNumbers++;

    }

    cout << goodNumbers;
    return 0;
}