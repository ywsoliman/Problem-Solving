#include <iostream>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    if (n == 1)
        cout << "1";
    else
    {
        int i = 1, sum = 0, total = 0;
        while (total <= n) {
            sum += i;
            i++;
            total += sum;
        }
        cout << i - 2;
    }
    return 0;
}