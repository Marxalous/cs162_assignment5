int ways_to_top(int n) {
	if (n < 0) return 0;
	else if (n == 0) return 1;

	return ways_to_top(n - 3) + ways_to_top(n - 2) + ways_to_top(n - 1);
}