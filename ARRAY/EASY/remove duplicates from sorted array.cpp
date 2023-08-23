int removeDuplicates(vector<int> &arr, int n) {
	if(n==0) return 0;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]!=arr[i]) count++;
	}
	return count;
}
