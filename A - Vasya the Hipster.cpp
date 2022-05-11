#include <iostream>
 
using namespace std;
 
int main()
{
	short a, b, diffSocks = 0, sameSocks = 0;
	cin >> a >> b;
 
	while (true) {
		if (a > 0 && b > 0) {
			diffSocks++;
			a--;
			b--;
		}
		else if (a > 1 && b == 0) {
			a -= 2;
			sameSocks++;
		}
		else if (b > 1 && a == 0) {
			b -= 2;
			sameSocks++;
		}
		else
			break;
	}
	cout << diffSocks << " " << sameSocks << endl;
	return 0;
}