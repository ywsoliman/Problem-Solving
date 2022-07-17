#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t; cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int ctr = 1;
        vector<string> v;
        string s;
        while (s != to_string(n))
        {
            if (s.size() == 4) {
                ctr++;
                s = "";
            }
            s += to_string(ctr);
            v.push_back(s);
        }
        int digits = 0;
        for (string elem : v) {
            digits += elem.size();
        }
        cout << digits << "\n";
    }
    return 0;
}