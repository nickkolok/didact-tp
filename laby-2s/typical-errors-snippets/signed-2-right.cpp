unsigned int countTargets(int* arr, size_t size, int target){
	unsigned int count=0;
	for(size_t i=0; i<size; i++){
		if(arr[i]==target){
			count++;
		}
	}
	return count;
}

