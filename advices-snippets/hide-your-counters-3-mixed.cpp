int arr[8];

for (int i = 0; i < 8; i++) {
	cin >> arr[i];
}

int j = 0;
for (int i = 0; i < 8; i++) {
	if (sum[i] >= 0) {
		sum[j] = sum[i];
		j++;
	}
}

for (int k = 0; k < j; k++) {
	cout << arr[k];
}
