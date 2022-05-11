#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> prices;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        prices.push_back(num);
    }

    sort(prices.begin(), prices.end());

    int ctr = 0, sum = 0;
    for (int num : prices) {
        if (num < 0 && ctr < m) {
            sum += -1 * num;
            ctr++;
        }
    }

    cout << sum;

    return 0;
}