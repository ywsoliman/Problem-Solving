#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    int n, k, num;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> num;
            a.push_back(num);
        }
        vector<int> b;
        for (int i = 0; i < n; i++) {
            cin >> num;
            b.push_back(num);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int idx = 0;
        while (k--)
        {
            if (a[idx] <b[n - idx - 1])
                swap(a[idx], b[n - idx - 1]);
            idx++;
        }
        int sum = 0;
        for (int elem : a)
            sum += elem;
        cout << sum << "\n";
    }
    return 0;
}