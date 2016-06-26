#include <iostream>
#include <fstream>

using namespace std;

int main () {

	ifstream is ("data.txt", ifstream::binary);
	if (!is) { // Ошибка открытия файла
		return -1;
	}

	int length = 14;

	char* buffer = new char [length];
	double d = 0;

	is.read ((char*)(&d),sizeof(d));
	is.read (buffer,length);

	cout << d << endl;
	cout << buffer << endl;
	delete[] buffer;

	is.close();


	char newtext[] = "Another text";

	ofstream os ("data.txt",ofstream::binary); // Файл будет перезаписан
//	ofstream os ("data.txt",ofstream::binary | ofstream::app); // А так было бы дописано в конец

	if (!os) { // Ошибка открытия файла
		return -2; // Другой код ошибки
	}

	d*=1.5e10;

	os.write ((char*)(&d),sizeof(d));
	os.write (newtext,sizeof(newtext));
	os.close();

	return 0;
}
