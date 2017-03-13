#include <iostream>
using namespace std;

int main(){
	int mas1[8] = {0,1,2,3,4,5,6,17};
	
	cout << "Чтение одномерного массива без указателя:" << endl;
	for (int i = 0; i < 8; i++) {
		cout << mas1[i] << " ";
	}
	cout << endl;
	
	cout << "Чтение одномерного массива c указателем:" << endl;
	int* p_mas1 = &mas1[0];
	for (int i = 0; i < 8; i++) {
		cout << p_mas1+i << "  :  " << *(p_mas1+i) << endl;
	}
	//delete p_mas1; // Не нужно, иначе будет ошибка - память выделена статически
	cout << endl;
	
	const int rows = 2;
	const int cols = 3;
	int mas2[rows][cols] = {1001,1002,1003,1011,1012,1013};
	
	cout << "Чтение двумерного массива без указателя:" << endl;	
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << mas2[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Чтение двумерного массива с указателем:" << endl;	
	int* p_mas2 = &(mas2[0][0]); // Точка отсчёта - нулевой элемент нулевой строки
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
		cout << p_mas2+i*cols+j << "  :  " << *(p_mas2+i*cols+j) << endl;
		}
		cout << endl;
	}
	cout << endl;

	// То же, но без вывода адресов, в форме красивой таблички
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
		cout << *(p_mas2+i*cols+j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	return 0;

}
