#include <iostream>
using namespace std;

void 数当て() {
	int answer = 46;
	int n;

	cout << "数当て！1-100まで" << endl;

	while (true) {
		cout << "数字をいれよう" << endl;
		cin >> n;

		if (n == answer) {
			cout << "正解!" << endl;
			break;
		}
	}
}