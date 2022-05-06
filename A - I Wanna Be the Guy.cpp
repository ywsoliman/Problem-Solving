#include <iostream>
#include <bitset>

using namespace std;

bitset<100> s = {};

int main()
{

    int n, p; cin >> n >> p;
    for (int i = 0; i < p; i++) {
        int num; cin >> num;
        s[num - 1] = 1;
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int num; cin >> num;
        s[num - 1] = 1;
    }
    if (s.count() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}