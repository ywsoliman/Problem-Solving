#include <iostream>

using namespace std;

int maximum(int a, int b, int c, int d, int e)
{
    if (a >= b && a >= c && a >= d && a >= e)
        return a;
    else if (b >= a && b >= c && b >= d && b >= e)
        return b;
    else if (c >= a && c >= b && c >= d && c >= e)
        return c;
    else if (d >= a && d >= b && d >= c && d >= e)
        return d;
    return e;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int first = a + b * c;
    int second = a * (b + c);
    int third = a * b * c;
    int fourth = (a + b) * c;
    int fifth = a + b + c;

    cout << maximum(first, second, third, fourth, fifth);

    return 0;
}