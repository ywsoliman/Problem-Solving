#include <iostream>

using namespace std;

int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int min = INT_MAX;
        int max = INT_MIN;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            if (min > a)
                min = a;
            if (max < a)
                max = a;
        }
        cout << max - min << endl;
    }
    return 0;
}