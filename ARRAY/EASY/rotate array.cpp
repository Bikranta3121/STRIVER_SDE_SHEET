vector<int> rotateArray(vector<int>arr, int k) {
   reverse(arr.begin(),arr.end());
   reverse(arr.begin(),arr.begin()+arr.size()-k);
   reverse(arr.begin()+arr.size()-k,arr.end());
   return arr;
}
