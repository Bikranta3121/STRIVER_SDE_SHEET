#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	int maxi=0;
    int n=arr.size();
	int sum=0;
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	    if(sum==0)
		{
			maxi=i+1;

		}
		else{
			if(mp.find(sum)==mp.end())
			{
				mp[sum]=i;
			}
			else{
				maxi=max(maxi,i-mp[sum]);
			}
		}
	}
	return maxi;
	
}
