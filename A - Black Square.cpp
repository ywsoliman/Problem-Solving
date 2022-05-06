#include <iostream>

using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++) {
        int a; cin >> a;
        arr[i] = a;
    }
    string s; cin >> s;
    int total = 0;
    for (char c : s) {
        total += arr[(int)c - 49];
    }
    cout << total;
    return 0;
}