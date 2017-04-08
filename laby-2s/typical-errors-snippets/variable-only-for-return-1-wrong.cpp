double fun(double x)
{
	double y;
	if (x >= -2 && x < 0){
		y = 3;
	} else if (x >= 0 && x < 2){
		y = 3 + x;
	} else if (x >= 2 && x <= 4){
		y = atan(x + 3);
	}
	return y;
}
