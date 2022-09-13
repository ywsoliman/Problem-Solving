#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, l;
    cin >> n >> l;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    double mx = v[0] - 0;
    double d;
    for (int i = 1; i < n; i++) {
        d = (v[i] - v[i - 1]) / 2.0;
        mx = max(mx, d);
    }
    d = l - v[n - 1];
    mx = max(mx, d);

    cout << fixed << mx << endl;

    return 0;
}