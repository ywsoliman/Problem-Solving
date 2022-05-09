#include <iostream>
 
using namespace std;
 
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
 
	int total = 0;
	while (a != 0)
	{
		if ((b - 2) >= 0 && (c - 4) >= 0)
		{
			total += 7;
			b -= 2;
			c -= 4;
		}
		a--;
	}
 
	cout << total << endl;
 
	return 0;
}