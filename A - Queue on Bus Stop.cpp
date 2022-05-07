#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[i] = num;
    }

    int buses = 1;
    int sum = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] + sum <= m)
            sum += arr[i];
        else {
            sum = arr[i];
            buses++;
        }
    }
    cout << buses;
    return 0;
}
