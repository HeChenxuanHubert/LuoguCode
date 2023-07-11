#include<iostream>
using namespace std;
int main() {
	int apple[10], max, num = 0;
	for (int i = 0; i < 10; i++) {
		cin >> apple[i];
	}
	cin >> max;
	max += 30;
	for (int i = 0; i < 10; i++) {
		if (max >= apple[i]) {
			num += 1;
		}
	}
	cout << num;
	system("pause");
	return 0;
}