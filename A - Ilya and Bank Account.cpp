#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    if (n >= 0)
        cout << n;
    else
    {
        int x = n % 10;
        int y = n % 100;
        y /= 10;
        if (y > x)
            cout << n / 10;
        else
        {
            string s = to_string(n);
            s[s.length() - 2] = s[s.length() - 1];
            cout << stoi(s) / 10;
        }
    }
    return 0;
}