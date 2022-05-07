#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    int minimum, maximum;

    for (int i = 0; i < n; i++) {

        if (i == 0) {
            minimum = abs(v.at(i) - v.at(i + 1));
            maximum = abs(v.at(i) - v.at(n - 1));
        }
        else if (i == n - 1) {
            minimum = abs(v.at(i) - v.at(i - 1));
            maximum = abs(v.at(i) - v.at(0));
        }
        else {
            minimum = min(abs(v.at(i) - v.at(i + 1)), abs(v.at(i) - v.at(i - 1)));
            maximum = max(abs(v.at(i) - v.at(n - 1)), abs(v.at(i) - v.at(0)));
        }
        cout << minimum << " " << maximum << endl;
    }

    return 0;
}
