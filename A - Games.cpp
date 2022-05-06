#include <iostream>
#include <vector>

using namespace std;

struct Team {
    int host, guest;
    Team(int host, int guest) : host(host), guest(guest) {}
};

int main()
{
    int n; cin >> n;
    vector<Team> v;
    for (int i = 0; i < n; i++) {
        int c1, c2; cin >> c1 >> c2;
        v.push_back(Team(c1, c2));
    }
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i].host == v[j].guest)
                result++;
        }
    }
    cout << result;
    return 0;
}