#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
    int n; cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }

    int l = 0;
    int r = n - 1;

    int lSum = v[0];
    int rSum = v[n - 1];

    int alice = 0, bob = 0;

    while (l <= r) {
        if (lSum <= rSum) {
            l++;
            lSum += v[l];
            alice++;
        }
        else {
            r--;
            rSum += v[r];
            bob++;
        }
    }

    cout << alice << " " << bob;

    return 0;
}