#include <iostream>
using namespace std;


void array_sum(int* a, int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += *a++;
		cout << "address" << a << endl;
	}

	cout << "合計は" << sum << endl;
}


int main() {
	int array[4] = { 1,2,3,4 };

	array_sum(array, 4);

	return 0;
}

