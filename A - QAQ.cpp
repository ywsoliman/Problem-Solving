#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int totalQAQ = 0;
 
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != 'A')
            continue;
        int beforeI = 0, afterI = 0;
        for (int j = 0; j < i; j++) {
            if (s[j] == 'Q')
                beforeI++;
        }
        for (int j = i + 1; j < s.length(); j++) {
            if (s[j] == 'Q')
                afterI++;
        }
        totalQAQ += beforeI * afterI;
    }
 
    cout << totalQAQ;
 
    return 0;
}