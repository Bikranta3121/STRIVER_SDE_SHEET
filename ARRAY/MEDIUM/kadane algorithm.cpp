class Solution {
public:
    /***************KADANE ALGORITHM*************************/
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int main_sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>main_sum)
              main_sum=sum;
            if(sum<0)
              sum=0;  
        }
        return main_sum;
        
    }
};
