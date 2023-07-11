#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int fenZi = 0, fenMu = 0;
	cin >> a >> b >> c;
	if (a < b) {
		if (a < c) {
			fenZi = a;
			if (b > c) {
				fenMu = b;
			}
			else {
				fenMu = c;
			}
		}
		else {
			fenZi = c;
			fenMu = b;
		}
	}
	else {
		if (b < c) {
			fenZi = b;
			if (a > c) {
				fenMu = a;
			}
			else {
				fenMu = c;
			}
		}
		else {
			fenZi = c;
			fenMu = a;
		}
	}
	for (int i = 2; i <= fenZi; i++) {
		if (fenZi % i == 0 && fenMu % i == 0) {
			fenZi /= i;
			fenMu /= i;
		}
	}
	cout << fenZi << "/" << fenMu << endl;
	std::system("pause");
	return 0;
}