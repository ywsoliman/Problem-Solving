#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main()
{
    int t; cin >> t;
    int n, num;
    while(t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> num;
            v.push_back(num);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 1; i++) {
            if (abs(v[i] - v[i + 1]) <= 1) {
                v.erase(v.begin() + i);
                i = -1;
            }
        }

        if (v.size() == 1)
            cout << "YES\n";
        else
            cout << "NO\n";

        v.clear();
    }
    return 0;
}