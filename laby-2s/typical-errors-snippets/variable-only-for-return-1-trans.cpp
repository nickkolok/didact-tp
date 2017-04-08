double fun(double x)
{
	if (x >= -2 && x < 0){
		return 3;
	} else if (x >= 0 && x < 2){
		return 3 + x;
	} else if (x >= 2 && x <= 4){
		return atan(x + 3);
	}
}
