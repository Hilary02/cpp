#include <iostream>

//これを使うとstd::とつけなくても利用できる
using namespace std;

void for文() {
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	cout << "--------" << endl;


	//C言語的書き方(このまま移植はできない)
	int i = 0;
	for (/*int i = 0*/; i < 10; i++)
	{
		cout << i << endl;
	}


	//for (int i = 0; /*i < 10*/; i++)
	//{
	//	cout << i << endl;
	//}


	//for (int i = 0; i < 10; /*i++*/)
	//{
	//	cout << i << endl;
	//}
}

void while文() {
	int i = 0;		//初期化
	while (true) {	//条件式
		cout << i << endl;
		i++;		

		if (i == 10) {	//脱出用の式
			break;
		}
	}
}

void dowhile文() {
	int n = 10;

	do {
		cout << "dowhile" << endl;
		n++;
	} while (n <= 5);

	n = 10;
	while (n <= 5) {
		cout << "while" << endl;
		n++;
	}
}