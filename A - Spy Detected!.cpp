#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        vector<int> v;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int num; cin >> num;
            v.push_back(num);
        }
        for (int i = 0; i < n; i++) {
            if (count(v.begin(), v.end(), v.at(i)) == 1) {
                cout << i + 1 << endl;
                break;
            }
        }

    }
    return 0;
}