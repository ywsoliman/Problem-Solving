#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        total += num;
    }
    cout << total / n;
    return 0;
}