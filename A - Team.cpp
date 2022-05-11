#include <iostream>
 
using namespace std;
 
int main()
{
    int n, ctr = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 1)
            ctr++;
    }
    cout << ctr;
    return 0;
}