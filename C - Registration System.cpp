#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, double> map;
    int t; cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (map[s] == 0) {
            map[s]++;
            cout << "OK\n";
        }
        else
        {
            cout << s << map[s] << "\n";
            map[s]++;
        }
    }
    return 0;
}