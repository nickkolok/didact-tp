int main(){
	char* str = new char[SIZE];
	cin >> str;
	cout << strlen(str) << endl;
	delete[] str;
	return 0;
}
