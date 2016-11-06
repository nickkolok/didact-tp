if (isupper(str[i]) && isupper(str[i + 1])) {
	newStr[i] = str[i];
	newStr[i + 1] = tolower(str[i + 1]);
	i++;
} else {
	newStr[i] = str[i];
}
