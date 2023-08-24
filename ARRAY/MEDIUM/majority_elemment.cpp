class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num=0;
        int zero=0;
        while(zero<nums.size())
        {
           if(nums[zero]==0)
           {
               swap(nums[num],nums[zero]);
               num++;
           }
           zero++;
        }
        num=nums.size()-1;
        int two=num;
        while(two>=0)
        {
            if(nums[two]==2)
            {
                swap(nums[two],nums[num]);
                num--;
            }
            two--;
        }

    }
};
