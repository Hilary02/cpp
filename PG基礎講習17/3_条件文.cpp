#include <iostream>

//������g����std::�Ƃ��Ȃ��Ă����p�ł���
using namespace std;

void ifelse() {
	int n=80;

	(n % 2==0)? std::cout <<"����"<<std::endl : std::cout << "�" << std::endl;



	//if (n % 2 == 0) {
	//	cout << "2�Ŋ���؂��" << endl;

	//	if (n % 4 == 0) {
	//		cout << "4�ł�����؂��" << endl;
	//	}

	//else {
	//	cout << "2�Ŋ���؂�Ȃ�" << endl;
	//}
	//}

}

void case_prac() {
	int n=12;
	switch (n%4)	//
	{
	case 0:
		cout << "�]���0" << endl;
		break;
	case 1:
		cout << "�]���1" << endl;
		break;
	case 2:
		cout << "�]���2" << endl;
		break;
	case 3:
		cout << "�]���3" << endl;
		break;
	default:
		cout << "���s����Ă�H" << endl;
		break;
	}
}