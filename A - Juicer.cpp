#include <iostream>

using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int total = 0;
    int waste = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num > b)
            continue;
        else
            total += num;
        if (total > d) {
            total = 0;
            waste++;
        }
    }
    cout << waste;
    return 0;
}