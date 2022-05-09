#include <iostream>
 
using namespace std;
 
int main()
{
    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 10)
        cout << "-1";
    else
    {
        cout << t;
        if (t == 10)
            for (int i = 0; i < n - 2; i++)
                cout << "0";
        else
            for (int i = 0; i < n - 1; i++)
                cout << "0";
    }
    return 0;
}