#include <iostream>
#include <ctime>
#include <cstdlib>

void ���݂���() {
	//1����6�܂ł̐����������_���ŕ\�������
	srand(time(NULL));
	int dice = rand() % 6 + 1;
	std::cout << "���݂���" << std::endl;
	if (dice == 1) {
		std::cout << "��g�I" << std::endl;
	}
	if (dice == 2 || dice == 3) {
		std::cout << "�g�I" << std::endl;
	}
	if (dice == 4) {
		std::cout << "���g�I" << std::endl;
	}
	if (dice == 5) {
		std::cout << "���g�I" << std::endl;
	}
	if (dice == 6) {
		std::cout << "��..." << std::endl;
	}

	char hoge;

	hoge = getchar();

	std::cout << hoge << std::endl;
}