#include <iostream>

//これを使うとstd::とつけなくても利用できる
using namespace std;

void ifelse() {
	int n=80;

	(n % 2==0)? std::cout <<"偶数"<<std::endl : std::cout << "奇数" << std::endl;



	//if (n % 2 == 0) {
	//	cout << "2で割り切れる" << endl;

	//	if (n % 4 == 0) {
	//		cout << "4でも割り切れる" << endl;
	//	}

	//else {
	//	cout << "2で割り切れない" << endl;
	//}
	//}

}

void case_prac() {
	int n=12;
	switch (n%4)	//
	{
	case 0:
		cout << "余りは0" << endl;
		break;
	case 1:
		cout << "余りは1" << endl;
		break;
	case 2:
		cout << "余りは2" << endl;
		break;
	case 3:
		cout << "余りは3" << endl;
		break;
	default:
		cout << "実行されてる？" << endl;
		break;
	}
}