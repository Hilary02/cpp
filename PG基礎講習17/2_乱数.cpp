#include <iostream>
#include <cstdlib>
#include <ctime>


void ����() {

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
		//	std::cout << i <<"�v�f:�@" <<times[i] << std::endl;
		//}

//		std::cout << "�ł��o���v�f:�@" << max << std::endl;
		most[max]++;
	}

	for (int i = 0; i < NUM; i++) {
		std::cout << i << "�v�f:�@" << most[i] << std::endl;
	}
}



void �����ő�l() {
	srand(time(NULL));
	int max = 0;
	int temp = 0;
	for (int i = 0; i<100; i++) {
		temp = rand();
		std::cout << temp << std::endl;
		max = temp > max ? temp : max;	//����͓���ȏ�������ƔF�����Ă�������
	}

	std::cout << "�ő�l��" << max << "�ł�" << std::endl;
}