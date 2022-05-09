#include <iostream>
 
using namespace std;
 
int main()
{
    string s; cin >> s;
    string word = "hello";
    int index = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == word[index])
            index++;
        if (index == 5)
            break;
    }
    if (index == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}