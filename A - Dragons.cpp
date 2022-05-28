#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool sortPairs(const pair<int,int> &a,
               const pair<int,int> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int s, n;
    cin >> s >> n;
    int x, y;
    vector<pair<int, int>> v;
    while (n--)
    {
        cin >> x >> y;
        v.emplace_back(x, y);
    }
    sort(v.begin(), v.end(), sortPairs);
    bool flag = true;
    for (auto pair : v) {
        if (s > pair.first)
            s += pair.second;
        else {
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
    
    return 0;
}