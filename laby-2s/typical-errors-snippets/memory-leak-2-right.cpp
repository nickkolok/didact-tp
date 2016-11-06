int main(){
	int* n = new int;
	cin >> *n;
	cout << (*n)*(*n) << endl;
	delete n;
	return 0;
}
