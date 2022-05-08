#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string arr[100];

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        arr[i] = s;
    }

    if (n == 1)
        cout << arr[0];
    else
    {
        string t1 = arr[0]; int t1Score = 1;
        string t2; int t2Score = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] == t1)
                t1Score++;
            if (t1 != arr[i])
                t2 = arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == t2)
                t2Score++;
        }

        string winner = (t1Score > t2Score) ? t1 : t2;
        cout << winner;
    }

    return 0;
}