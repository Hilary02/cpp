#include <iostream>
#include <ctime>
#include <cstdlib>

void おみくじ() {
	//1から6までの数字がランダムで表示される
	srand(time(NULL));
	int dice = rand() % 6 + 1;
	std::cout << "おみくじ" << std::endl;
	if (dice == 1) {
		std::cout << "大吉！" << std::endl;
	}
	if (dice == 2 || dice == 3) {
		std::cout << "吉！" << std::endl;
	}
	if (dice == 4) {
		std::cout << "中吉！" << std::endl;
	}
	if (dice == 5) {
		std::cout << "小吉！" << std::endl;
	}
	if (dice == 6) {
		std::cout << "凶..." << std::endl;
	}

	char hoge;

	hoge = getchar();

	std::cout << hoge << std::endl;
}