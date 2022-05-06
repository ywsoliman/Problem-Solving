#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        while (h < 24)
        {
            while (m < 60)
            {
                m++;
                total++;
            }
            m = 0;
            h++;
        }
        h = 0;
        cout << total << endl;
        total = 0;
    }

    return 0;
}