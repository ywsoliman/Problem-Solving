#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool color = false;

    for (int i = 0; i < n * m; i++) {
        char c; cin >> c;
        if (c == 'C' || c == 'M' || c == 'Y') {
            color = true;
            break;
        }
    }

    if (color)
        cout << "#Color";
    else
        cout << "#Black&White";
    
    return 0;
}
