#include <iostream>
#include <climits>


void doSmth() {
	std::cout << "Bin in einer Funktion";
}
int add(int a, int b) {
	return a + b;
}
int main(){
	

	doSmth();
	std::cout<< add(5, 3);
	system("pause");
	return 0;
}