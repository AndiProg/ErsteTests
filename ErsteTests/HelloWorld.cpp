#include <iostream>
#include "OwnUtil.h"




int main(){
	int i = 2;
	int num = 0;
	while (num<100) {
		if (is_prime(i)) {
			std::cout << i << std::endl;
			num++;
		}
		i++;
	}
	int l;
	std::cin >> l;
	return 0;
}