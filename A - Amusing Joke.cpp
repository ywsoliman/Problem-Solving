#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;
 
    string x = guest + host;
 
    sort(x.begin(), x.end());
    sort(pile.begin(), pile.end());
 
    if (x == pile)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}