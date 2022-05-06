#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    if (n == 1)
        cout << "1";
    else
    {
        int arr[10][10];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0)
                    arr[i][j] = 1;
                else if (j == 0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
        cout << arr[n - 1][n - 1];
    }
    return 0;
}