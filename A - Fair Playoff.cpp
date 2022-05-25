#include <iostream>
 
using namespace std;
 
 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
 
        int firstWinner = max(s1, s2);
        int secondWinner = max(s3, s4);
 
        if ((firstWinner < s3 && s3 != secondWinner) || (firstWinner < s4 && s4 != secondWinner)
            || (secondWinner < s1 && s1 != firstWinner) || (secondWinner < s2 && s2 != firstWinner))
            cout << "NO\n";
        else
            cout << "YES\n";
        
    }
    return 0;
}