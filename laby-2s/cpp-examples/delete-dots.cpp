#include <iostream>
#include <cstring>

using namespace std;

char* deleteDots(char* str) {
	unsigned int len = strlen(str);
	if (!len)
		return NULL;
	char* newStr = new char[len + 1];
	unsigned int i = 0, z = 0;

	while (i <= len){
		if(str[i]!='.'){
			newStr[z] = str[i];
			z++;
		}
		i++;
	}
	return newStr;
}

int main() {
	char* str = new char[1024];
	cin >> str;
	cout << deleteDots(str) << endl;

	return 0;
}

