#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
	int mat[5][5];
	int x, y;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 1) {
				x = i;
				y = j;
			}
		}
	}
	int moves = 0;
	while (true) {
		if (x > 2) {
			x--;
			moves++;
		}
		else if (x < 2) {
			x++;
			moves++;
		}
		if (y > 2) {
			y--;
			moves++;
		}
		else if (y < 2) {
			y++;
			moves++;
		}
		if (x == 2 && y == 2)
			break;
	}
	cout << moves << endl;
	return 0;
}