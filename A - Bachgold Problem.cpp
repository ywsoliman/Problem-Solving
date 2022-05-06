#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a = n / 2;
    cout << a << endl;
    for (int i = 0; i < a - 1; i++)
        cout << "2 ";
    if (n % 2 == 0)
        cout << "2";
    else
        cout << "3";
    return 0;
}