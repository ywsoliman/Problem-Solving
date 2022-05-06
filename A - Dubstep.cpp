#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    int index = s.find("WUB");
    while (index != -1)
    {
        if (index > 0 && s[index - 1] != ' ')
            s.replace(index, 3, " ");
        else
            s.erase(index, 3);
        index = s.find("WUB");
    }
    cout << s;
    return 0;
}