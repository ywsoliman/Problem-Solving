#include <iostream>
 
using namespace std;
 
int main()
{
    int n, x = 0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "++X" || str == "X++")
            x++;
        else if (str == "--X" || str == "X--")
            x--;
    }
    cout << x;
    return 0;
}