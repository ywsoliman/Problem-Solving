#include <iostream>
#include <vector>

using namespace std;

int minVector(vector<int> v1, vector<int> v2, vector<int> v3) {
    if (v1.size() <= v2.size() && v1.size() <= v3.size())
        return v1.size();
    else if (v2.size() <= v1.size() && v2.size() <= v3.size())
        return v2.size();
    return v3.size();
}

int main()
{
    int n; cin >> n;
    vector<int> programming;
    vector<int> math;
    vector<int> PE;

    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        if (num == 1)
            programming.push_back(i + 1);
        else if (num == 2)
            math.push_back(i + 1);
        else
            PE.push_back(i + 1);
    }

    int minSize = minVector(programming, math, PE);
    cout << minSize << endl;

    for (int i = 0; i < minSize; i++)
        cout << programming.at(i) << " " << math.at(i) << " " << PE.at(i) << endl;

    return 0;
}