int Sum = myarr[0][N - 1];
for (int i = 1; i < N; i++) {
	Sum = Sum + myarr[i][N - 1 - i];
}
