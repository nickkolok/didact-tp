int arr[8];

for (int i = 0; i < 8; i++) {
	cin >> arr[i];
}

//cout << i << endl; // Ошибка, переменная i недоступна извне цикла

int sum = arr[0];
for (int i = 1; i < 8; i++) {
	sum += arr[i];
}

cout << sum << endl;
