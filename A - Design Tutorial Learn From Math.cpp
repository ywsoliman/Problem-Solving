#include <iostream>

using namespace std;

bool isComposite(int num)
{
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int n; cin >> n;
    int a, b;
    if (n % 2 == 0) {
        a = n / 2;
        b = n / 2;
    }
    else {
        a = n / 2;
        b = n / 2 + 1;
    }
    while (!isComposite(a) || !isComposite(b)) {
        a--;
        b++;
    }
    cout << a << " " << b;

    return 0;
}