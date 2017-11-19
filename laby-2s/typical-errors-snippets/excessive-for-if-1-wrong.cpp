int Sum = 0;
for (int i = 0; i < N; i++) {
	for (int j = 0; j < N; j++) {
		if (j == N - 1 - i) {
			Sum = Sum + myarr[i, j];
		}
	}
}
