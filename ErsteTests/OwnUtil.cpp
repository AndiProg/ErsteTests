int add_int(int a, int b) {
	return a + b;
}
bool is_prime(int a) {
	if (a == 1) {
		return 0;
	}
	for (int i=2; i < a; i++) {
		if (a%i == 0) {
			return 0;
		}
	}
	return 1;
}