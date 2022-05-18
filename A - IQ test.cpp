#include <iostream>
 
using namespace std;
 
int arr[100];
 
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        arr[i] = num;
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    for (int i = 0; i < n; i++) {
        if (even == 1 && arr[i] % 2 == 0)
            cout << i + 1;
        else if (odd == 1 && arr[i] % 2 != 0)
            cout << i + 1;
    }
 
    return 0;
}