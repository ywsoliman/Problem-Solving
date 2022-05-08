#include <iostream>
 
using namespace std;
 
bool isPrime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
 
int main()
{
 
    int arr[15];
    int x, y;
    cin >> x >> y;
 
    int index = 0;
    for (int i = 2; i < 50; i++) {
        if (isPrime(i)) {
            arr[index++] = i;
        }
    }
 
    bool flag = false;
 
    for (int i = 0; i < 14; i++) {
        if (arr[i] == x && arr[i + 1] == y) {
            flag = true;
            break;
        }
    }
 
    if (flag)
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}