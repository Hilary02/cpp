#include <iostream>

int 足し算(int 足す数, int 足される数) {
	return 足す数 + 足される数;

}


void multibite() {
	int へんすぅ = 5;	//日本語が許される
	int ほげ = 10;
	std::cout << 足し算(へんすぅ, ほげ) << std::endl;
}