#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int n; cin >> n;
    vector<int> v;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    if (n == 1)
        cout << "1";
    else
    {
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
 
            int total = 0;
 
            for (int j = i - 1; j >= 0; j--) {
                if (v[j] <= v[j + 1])
                    total++;
                else
                    break;
            }
 
            for (int j = i + 1; j < n; j++) {
                if (v[j] <= v[j - 1])
                    total++;
                else
                    break;
            }
 
            mx = max(mx, total + 1);
 
        }
        cout << mx;
    }
    return 0;
}