#include <iostream>

void ���Z�q() {
	int a = 3;
	int b = 5;

	std::cout << a+b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;
	std::cout << (++a) << std::endl;
	std::cout << (--a) << std::endl;
	std::cout << a << std::endl;

	//�C���N�������g
	a = b++;
	std::cout << a << std::endl;

}