#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char arr[50][50];

    int ctr = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0)
                arr[i][j] = '#';
            else
                arr[i][j] = '.';
        }
        if (i % 2 != 0)
        {
            if (ctr % 2 == 0)
                arr[i][m - 1] = '#';
            else
                arr[i][0] = '#';
            ctr++;
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}