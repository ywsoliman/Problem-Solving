#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int t; cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
            swap(a, b);
        if (b * 2 < a)
            cout << a * a << "\n";
        else
            cout << min(a * 2, b * 2) * min(a * 2, b * 2) << "\n";
    }
    return 0;
}