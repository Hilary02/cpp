#include <iostream>
#include <string>

void Cin() {
	std::string name;
	std::cin >> name;
	std::cout << "ようこそ" << name << "さん" << std::endl;

	int inNum;
	std::cin >> inNum;
	std::cout << "入れた数字は" << inNum << "です" << std::endl;

}
