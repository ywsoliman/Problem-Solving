#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, t, num; cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        int total = 0;
        bool allEven = true;
        bool allOdd = true;
        for (int i = 0; i < n; i++) {
            cin >> num;
            total += num;
            if (num % 2 != 0)
                allEven = false;
            else
                allOdd = false;
        }
        if (allEven || (allOdd && total % 2 == 0))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}