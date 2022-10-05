#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    int n, num;
    while (t--)
    {
        cin >> n;
        int even = 0,
            odd = 0;

        for (int i = 0; i < 2 * n; i++) {
            cin >> num;
            if (num % 2 == 0)
                even++;
            else
                odd++;
        }

        cout << ((even == odd) ? "Yes\n" : "No\n");

    }
    return 0;
}