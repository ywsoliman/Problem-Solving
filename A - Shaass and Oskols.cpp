#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n, num; cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    int m, x, y; cin >> m;
    while (m--) {
        cin >> x >> y;
        x -= 1;
        if ((x - 1) > -1)
            v[x - 1] += y - 1;
        if ((x + 1) < n)
            v[x + 1] += v[x] - y;
        v[x] = 0;
    }
    for (int elem : v)
        cout << elem << "\n";
 
    return 0;
}