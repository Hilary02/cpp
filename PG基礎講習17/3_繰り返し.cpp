#include <iostream>

//������g����std::�Ƃ��Ȃ��Ă����p�ł���
using namespace std;

void for��() {
	
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	cout << "--------" << endl;


	//C����I������(���̂܂܈ڐA�͂ł��Ȃ�)
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

void while��() {
	int i = 0;		//������
	while (true) {	//������
		cout << i << endl;
		i++;		

		if (i == 10) {	//�E�o�p�̎�
			break;
		}
	}
}

void dowhile��() {
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