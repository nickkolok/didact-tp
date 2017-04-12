double fun(double x)
{
	if (x >= -2 && x < 0){
		return 3;
	}
	if (x >= 0 && x < 2){
		return 3 + x;
	}
	if (x >= 2 && x <= 4){
		return atan(x + 3);
	}
	return 0;
	// Строчка выше добавлена, так как совсем ничего не возвращать как-то нехорошо
}
