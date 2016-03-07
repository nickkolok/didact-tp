/* Задача:
	Пользователем вводятся два массива.
	Выяснить, какой из них имеет максимальную длину,
	и вывести этот массив на экран.

	Если длина массивов одинакова, вывести оба.
*/

#include <iostream>

using namespace std;

int* readNewArray(int* size){
	// В функцию передаётся указатель на переменную, в которой хранится размер массива
	cout<<"Введите количество элементов целочисленного массива:"<<endl;
	
	// Ввод значения с клавиатуры в ячейку памяти, адрес которой хранит указатель
	cin>>(*size); 

	// Выделяем место в памяти под новый массив.
	// В качестве размера можно использовать любое целочисленное выражение.
	// В частности, разыменованный указатель.
	int* mas=new int[ *size ];

	// Вводим массив  в цикле.
	// Заметьте: нет никакого отличия от работы с "обычными" статическими массивами,
	// кроме того, что в качестве размера массива используется значение,
	// передаваемое через указатель
	cout<<"Введите элементы массива, разделяя их пробелом или переводом строки:"<<endl;
	for(int i = 0; i < *size; i++){
		cin>>mas[i];
	}

	// Возвращаем указатель на созданный массив.
	// Размер отдельно передавать не надо - мы сразу работаем с ним через указатель.
	return mas;
}

void printArray(int* mas, int size){
	// При выводе массива мы не собираемся изменять его размер,
	// следовательно, нет необходисмости передавать размер через указатель.
	for(int i=0; i<size; i++){
		cout<<mas[i]<<" "; // Пробел - чтобы элементы не слиплись
	}
}

int main(){
	cout<<"Введите массив A:"<<endl;
	int sizeA;
	int* arrA=readNewArray(&sizeA);
	cout<<"Введите массив B:"<<endl;
	int sizeB;
	int* arrB=readNewArray(&sizeB);
	if(sizeA==sizeB){
		cout<<"Массив A и массив B имеют одинаковую длину"<<endl;
		cout<<"Массив A:"<<endl;
		printArray(arrA,sizeA);
		cout<<"Массив B:"<<endl;
		printArray(arrB,sizeB);
	} else if (sizeA<sizeB) {
		cout<<"Массив B длинее, чем массив A"<<endl;
		cout<<"Массив B:"<<endl;
		printArray(arrB,sizeB);
	} else {
		cout<<"Массив A длинее, чем массив B"<<endl;
		cout<<"Массив A:"<<endl;
		printArray(arrA,sizeA);
	}

	// Освобождаем память, выделенную под массивы.
	// Два вызова new[] (хоть и в одной и той же функции, в одной и той же строке) -
	// значит, должно быть два вызова delete[]
	delete[] arrA;
	delete[] arrB;


	return 0;
}
