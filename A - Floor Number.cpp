#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    int n, x;
    while (t--)
    {
        cin >> n >> x;
        n -= 2;
        if (n < 0)
            cout << 1 << "\n";
        else
            cout << ceil((double)n / x) + 1 << "\n";
    }
    return 0;
}