#include <iostream>

void 暗号計算() {
	long long ans = 0;
	int Hira;
	std::cin >> Hira;

	ans = Hira;
	std::cout << "887までならセーフ" << std::endl;
	std::cout << "1:" << ans << std::endl;

	for (int  i = 2; i < 8; i++)
	{
		ans *= Hira;
		std::cout << i << ":" << ans << std::endl;
	}

	std::cout << "589で割ったあまり" << std::endl;
	std::cout << ans%589 << std::endl;
}