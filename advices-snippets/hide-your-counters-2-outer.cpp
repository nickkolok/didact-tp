int i;
int arr[8];

for (i = 0; i < 8; i++) {
	cin >> arr[i];
}

cout << i << endl; // 8

int sum = arr[0];
for (i = 1; i < 8; i++) {
	sum += arr[i];
}

cout << sum << endl;

cout << i << endl; // 8
