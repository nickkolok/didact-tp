int main() {
	setlocale(LC_ALL,0);

	int k;
	double d;
	cin >> k;
	d = sqrt(k);
	cout << "Корень из " << k << " равен " << d << endl;
	cout << "Проверка: " << d << " * " << d << " = " << d*d << endl;

	return 0;
}
