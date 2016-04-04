#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef char symbol;
typedef symbol* word;



int random(int minimum, int maximum){
	return rand()%(maximum-minimum+1)+minimum;
}

word sklon(int number, word one, word two, word five){
	unsigned int mod100 = number % 100;
	if (mod100 >= 5 && mod100 <= 20)
		 return five;
	unsigned int mod10 = mod100 % 100;
	if (mod10 == 1)
		return one;
	if (mod10 >= 2 && mod10 <= 4)
		return two;
	return five;
}

int main(){
	srand(time(0)); // Делаем случайные числа разными во время разных запусков
	word femaleNames[]={"Аня", "Настя", "Вероника", "Катя"};
	word magazineVn[]={"журнал" ,"газету"};
	word magazineRd[]={"журнала","газеты"};
	unsigned int magazineType=random(0,1);

	unsigned int price = random(10,100);
	unsigned int quantity = random(10,30);
	unsigned int she_spended = price * quantity;
	unsigned int difference = random(10,200);
	unsigned int cost6months = she_spended + difference;
	cout << "Задание:"<<endl;
	cout << "Стоимость полугодовой подписки на "<<magazineVn[magazineType]<<" составляет "
		<< cost6months <<" "<<sklon(cost6months,"рубль","рубля","рублей")
		<<", а стоимость одного номера "<< magazineRd[magazineType]<<" - "
		<< price <<" "<<sklon(price,"рубль","рубля","рублей")<<". "
		<< "За полгода "<<femaleNames[random(0, 3)]<<" купила "<<quantity
		<<" "<<sklon(price,"номер","номера","номеров")<< " "<<magazineRd[magazineType]
		<<". На сколько рублей меньше она бы потратила, если бы подписалась на "
		<< magazineVn[magazineType]<<"?"<<endl;
	cout << "Ответ:"<<endl;
	// Обратите внимание: в ответ идёт переменная, которая
	// генерировалась случайным образом, а не вычислялась
	cout << difference;
	return 0;
}
