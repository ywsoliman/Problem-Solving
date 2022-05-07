#include <iostream>

using namespace std;

char getChar(char direction, char arr[], int i) {
    return (direction == 'R') ? arr[i - 1] : arr[i + 1];
}

int main()
{
    char firstRow[12] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']'};
    char secondRow[10] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'};
    char thirdRow[10] = {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'};

    char direction; cin >> direction;
    string s; cin >> s;

    string result = "";

    for (char c : s) {

        for (int i = 0; i < 12; i++) {
            if (c == firstRow[i]) {
                result += getChar(direction, firstRow, i);
                continue;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (c == secondRow[i]) {
                result += getChar(direction, secondRow, i);
                continue;
            }
        }
        for (int i = 0; i < 10; i++) {
            if (c == thirdRow[i]) {
                result += getChar(direction, thirdRow, i);
                continue;
            }
        }

    }
    cout << result;
    return 0;
}
