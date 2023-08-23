#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
   int bid=INT_MIN;
   for(int i=0;i<n;i++)
   {
       bid=max(bid,arr[i]);
   }
   return bid;
}
