#include <iostream>
#include <cstring>

using namespace std;

void outhex(char* str){
	static char hexdigits[]=
		{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	for(size_t i=0; str[i]; i++){
		cout<<hexdigits[str[i]>>4]<<hexdigits[str[i] & 15]<<" ";
	}
}

char* xorencrypt(char* txt, char* key){
	size_t keylength = strlen(key);
	size_t txtlength = strlen(txt);
	char* res=new char[txtlength+1];

	// Основной цикл шифрования
	for(size_t i=0; i<txtlength; i++){
		res[i] = txt[i] ^ key[i % keylength];
	}

	res[txtlength]=0; // Прибиваем терминальный нуль
	return res;
}

int main()
{
	char message[]="This is a message!";
	char key[]="simple_key";
	outhex(message);
	cout<<endl;
	outhex(key);
	cout<<endl;
	char* encryptedMessage = xorencrypt(message,key);
	cout<<encryptedMessage<<endl;
	outhex(encryptedMessage);
	cout<<endl;
	return 0;
}
/*
54 68 69 73 20 69 73 20 61 20 6D 65 73 73 61 67 65 21
73 69 6D 70 6C 65 5F 6B 65 79
27 01 04 03 4C 0C 2C 4B 04 59 1E 0C 1E 03 0D 02 3A 4A
*/
/* Вопрос для самостоятельного размышления:
Как расшифровать зашифрованное?
*/

