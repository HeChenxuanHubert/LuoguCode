#include<iostream>
using namespace std;
int main() {
	int a = 0;
	cin >> a;
	if (a <= 150) {
		printf("%.1f", (a * 0.4463));
	}
	else if (a >= 151 && a <= 400) {
		printf("%.1f", (150 * 0.4463 + (a - 150) * 0.4663));
	}
	else {
		printf("%.1f", (150 * 0.4463 + 250 * 0.4663 + (a - 400) * 0.5663));
	}
	system("pause");
	return 0;
}