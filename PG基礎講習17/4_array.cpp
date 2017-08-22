#include <iostream>

void array() {
	int a[3];
	a[0] = 5;
	a[1] = 7;
	a[2] = 9;

	for (int i = 0; i < 3; i++)
	{
		std::cout << a[i] << std::endl;
	}

	std::cout << "-----" << std::endl;


	int b[2][3] = { { 1,2,3 }, { 4,5,6 } };

	for (int i = 0; i < sizeof(b)/sizeof(b[0]); i++) {
		for (int j = 0; j < sizeof(b[0]) / sizeof(b[0][0]); j++)
		{
			std::cout << b[i][j] << std::endl;
		}
	}
	std::cout << "-----" << std::endl;

	std::cout << a[-1] << std::endl;

}