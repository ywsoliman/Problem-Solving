#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int min, max;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int score; cin >> score;
        if (i == 0) {
            min = score;
            max = score;
        }
        if (min > score) {
            res++;
            min = score;
        }
        if (max < score) {
            res++;
            max = score;
        }
    }

    cout << res;

    return 0;
}