#include <iostream>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    int arr[14] = {4, 44, 444, 7, 77, 777, 47, 74, 447, 774, 474, 747, 477, 744};
    bool isLucky = false;
    for (int i = 0; i < 14; i++) {
        if (n == arr[i] || n % arr[i] == 0) {
            isLucky = true;
            break;
        }
    }
    if (isLucky)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}