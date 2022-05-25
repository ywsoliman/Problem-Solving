#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int n, m, pieces;
    cin >> n >> m;
    int minimum = INT_MAX;
    for (int i = 0; i < m; i++) {
        cin >> pieces;
        v.push_back(pieces);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m - n + 1; i++)
        minimum = min(minimum, v[i + n - 1] - v[i]);
    cout << minimum;
    return 0;
}