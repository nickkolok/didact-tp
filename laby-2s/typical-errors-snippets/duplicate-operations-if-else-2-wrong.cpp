newStr[i] = str[i];
if (isupper(str[i]) && isupper(str[i + 1])) {
	newStr[i + 1] = tolower(str[i + 1]);
	i++;
}
