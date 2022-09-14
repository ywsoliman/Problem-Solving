#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    int current = 1;
    long long total = 0;

    for (int i = 0; i < m; i++) {
        if (current <= v[i])
            total += v[i] - current;
        else
            total += n - current + v[i];
        current = v[i];
    }
    cout << total;

    return 0;
}