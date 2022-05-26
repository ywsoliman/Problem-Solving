#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    int n, strength;
    while (t--)
    {
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> strength;
            v.push_back(strength);
        }
        int minimum = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(v[i] - v[j]) < minimum)
                    minimum = abs(v[i] - v[j]);
            }
        }
        cout << minimum << "\n";
    }
    return 0;
}