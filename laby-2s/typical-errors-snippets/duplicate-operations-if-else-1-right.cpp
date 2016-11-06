newStr[i] = str[i];
if (isupper(str[i]) && isupper(str[i + 1])) {
	i++;
	newStr[i] = tolower(str[i]);
}
