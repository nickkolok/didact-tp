int countTargets(int* arr, int size, int target){
	int count=0;
	for(int i=0; i<size; i++){
		if(arr[i]==target){
			count++;
		}
	}
	return count;
}

