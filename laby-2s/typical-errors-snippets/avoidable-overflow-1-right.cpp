int lastNumber(int *in_mas, size_t in_length)
{
	int multi = in_mas[0];
	for (size_t i = 1; i < in_length; i++)
		multi *= in_mas[i]%10;
	return abs(multi);
}
