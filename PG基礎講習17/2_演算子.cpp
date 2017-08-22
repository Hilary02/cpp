#include <iostream>

void 演算子() {
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

	//インクリメント
	a = b++;
	std::cout << a << std::endl;

}