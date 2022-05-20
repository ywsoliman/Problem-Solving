#include <iostream>
#include <vector>

using namespace std;

bool doesExist(const vector<int>& v, int num) {
    for (int n : v)
        if (n == num)
            return true;
    return false;
}

int main()
{
    int t; cin >> t;
    int n, num;
    while (t--)
    {
        vector<int> v;
        cin >> n;
        for (int i = 0; i < 2 * n; i++) {
            cin >> num;
            if (!doesExist(v, num))
                v.push_back(num);
        }
        for (int elem : v)
            cout << elem << " ";
        cout << "\n";
    }
    return 0;
}