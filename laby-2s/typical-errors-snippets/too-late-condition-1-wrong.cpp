char* deleteDots(char* str) {
	unsigned int len = strlen(str);
	char* newStr = new char[len + 1];
	unsigned int i = 0, z = 0;

	if (!len)
		return NULL;

	while (i <= len){
		if(str[i]!='.'){
			newStr[z] = str[i];
			z++;
		}
		i++;
	}
	return newStr;
}

