#include<iostream>
using namespace std;
int main() {
	int x, n, day = 0;
	cin >> x >> n;
	if (x <= 5) {
		day = ((n + x - 8) % 7 <= 5) ? (6 - x + (n + x - 8) / 7 * 5 + (n + x - 8) % 7) : (6 - x + (n + x - 8) / 7 * 5 + 5);
	}
	else {
		day = ((n + x - 8) % 7 <= 5) ? ((n + x - 8) / 7 * 5 + (n + x - 8) % 7) : ((n + x - 8) / 7 * 5 + 5);
	}
	cout << day * 250 << endl;
	system("pause");
	return 0;
}