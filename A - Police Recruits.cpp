#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int hired = 0;
    int untreated = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num > 0)
            hired += num;
        else
        {
            if (hired == 0)
                untreated++;
            else
                hired--;
        }
    }
    cout << untreated;
    return 0;
}