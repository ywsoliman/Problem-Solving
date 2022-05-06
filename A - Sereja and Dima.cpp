#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        int biggest;
        if (v.front() >= v.back()) {
            biggest = v.front();
            v.erase(v.begin());
        } else {
            biggest = v.back();
            v.pop_back();
        }
        if (i % 2 == 0)
            a += biggest;
        else
            b += biggest;
    }
    cout << a << " " << b;
    return 0;
}