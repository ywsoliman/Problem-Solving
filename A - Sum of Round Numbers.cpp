#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int t; cin >> t;
    while (t--)
    {

        int n; cin >> n;
        vector<int> results;
        int power = 1;
        while (n != 0) {

            if (n % 10 != 0) {
                results.push_back((n % 10) * power);
            }
            n /= 10;
            power *= 10;
        }
        cout << results.size() << endl;
        for (int num : results)
            cout << num << " ";
        cout << endl;

    }

    return 0;
}