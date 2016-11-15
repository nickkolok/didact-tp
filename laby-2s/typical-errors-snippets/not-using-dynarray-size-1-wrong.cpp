char* deleteDots(char* str) {
	unsigned int len = strlen(str);
	if (!len)
		return NULL;
	char* newStr = new char[1024];
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

