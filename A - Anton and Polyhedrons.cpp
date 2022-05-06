#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> polyhedrons {
            {"Tetrahedron", 4},
            {"Cube", 6},
            {"Octahedron", 8},
            {"Dodecahedron", 12},
            {"Icosahedron", 20}
    };
    map<string, int>::iterator it;
    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        total += polyhedrons[s];
    }
    cout << total;
    return 0;
}