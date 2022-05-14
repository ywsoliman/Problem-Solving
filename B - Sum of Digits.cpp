#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    if (s.length() < 2)
        cout << "0";
    else
    {
        int total = 0;
        while (s.length() > 1)
        {
            int sum = 0;
            for (int digit : s) {
                sum += digit - 48;
            }
            s = to_string(sum);
            total++;
        }
        cout << total;
    }

    return 0;
}