#include <iostream>

void �Í��v�Z() {
	long long ans = 0;
	int Hira;
	std::cin >> Hira;

	ans = Hira;
	std::cout << "887�܂łȂ�Z�[�t" << std::endl;
	std::cout << "1:" << ans << std::endl;

	for (int  i = 2; i < 8; i++)
	{
		ans *= Hira;
		std::cout << i << ":" << ans << std::endl;
	}

	std::cout << "589�Ŋ��������܂�" << std::endl;
	std::cout << ans%589 << std::endl;
}