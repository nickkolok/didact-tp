number fibo(number n){
	static size_t cachesize=0;
	static number* cache=0;

	if(n>=cachesize){
		cache=renew_cache(cache,cachesize,n*2);
		cachesize=n*2;
	}
	if(n==0){
		return 0;
	} else {
		if(n==1){
			return 1;
		} else {
			if(cache[n]){
				return cache[n];
			} else {
				return cache[n]=fibo(n-2)+fibo(n-1);
			}
		}
	}
}

