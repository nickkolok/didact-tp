int countTargets(int* arr, size_t size, int target){
	if(!arr){ // Соглашение о нулевых указателях
		return -1;
	}
	unsigned int count=0;
	for(size_t i=0; i<size; i++){
		if(arr[i]==target){
			count++;
		}
	}
	return count;
}

