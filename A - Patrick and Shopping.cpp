#include <iostream>

using namespace std;

int getMin(int a, int b, int c, int d) {
    if (a <= b && a <= c && a <= d)
        return a;
    else if (b <= a && b <= c && b <= d)
        return b;
    else if (c <= a && c <= b && c <= d)
        return c;
    return d;
}

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int firstPossibility = d1 * 2 + d2 * 2;
    int secondPossibility = d1 * 2 + d3 * 2;
    int thirdPossibility = d2 * 2 + d3 * 2;
    int fourthPossibility = d1 + d3 + d2;

    cout << getMin(firstPossibility, secondPossibility, thirdPossibility, fourthPossibility) << endl;

    return 0;
}