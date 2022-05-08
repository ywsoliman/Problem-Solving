#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int before[1000], after[1000];

    for (int i = 0; i < n; i++) {
        int b, a; cin >> b >> a;
        before[i] = b;
        after[i] = a;
    }

    bool rated = false;
    for (int i = 0; i < n; i++) {
        if (before[i] != after[i]) {
            rated = true;
            break;
        }
    }
    if (rated)
        cout << "rated";
    else
    {
        bool unrated = false;
        for (int i = 0; i < n - 1; i++) {
            if (before[i] < before[i + 1]) {
                unrated = true;
                break;
            }
        }
        if (unrated)
            cout << "unrated";
        else
            cout << "maybe";
    }
    return 0;
}
