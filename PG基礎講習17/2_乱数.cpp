#include <iostream>
#include <cstdlib>
#include <ctime>


void 乱数() {

	const int NUM = 6;
	int most[NUM] = {};

	//srand(time(NULL));
	srand(time(NULL));



	for (int i = 0; i <= 600; i++) {
		int times[NUM] = {};
		//std::cout << times[0] << std::endl;


		for (int i = 0; i < 6000; i++){
			times[rand() % NUM]++;
		}


		int max = 0;
		for (int i = 1; i < NUM; i++){
			if (times[max] <= times[i]) {
				max = i;
			}
		}

		//for (int i = 0; i < NUM; i++){
		//	std::cout << i <<"要素:　" <<times[i] << std::endl;
		//}

//		std::cout << "最も出た要素:　" << max << std::endl;
		most[max]++;
	}

	for (int i = 0; i < NUM; i++) {
		std::cout << i << "要素:　" << most[i] << std::endl;
	}
}



void 乱数最大値() {
	srand(time(NULL));
	int max = 0;
	int temp = 0;
	for (int i = 0; i<100; i++) {
		temp = rand();
		std::cout << temp << std::endl;
		max = temp > max ? temp : max;	//これは特殊な条件分岐と認識してください
	}

	std::cout << "最大値は" << max << "です" << std::endl;
}