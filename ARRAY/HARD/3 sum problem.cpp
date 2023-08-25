    class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            int i=0;
            int curr=INT_MIN;
            vector<vector<int>> ans;
            while(i<=nums.size()-3 and nums[i]<=0 )
            {
                int x=-nums[i];
                int start=i+1;
                int end=nums.size()-1;
                while(start<nums.size()-1 and start<end and curr!=nums[i])
                {
                    if(nums[start]+nums[end]>x) end--;
                    else if(nums[start]+nums[end]<x) start++;
                    else
                    {
                        ans.push_back({nums[i],nums[start],nums[end]});
                        int currr=nums[start];
                    
                        while(currr==nums[start]  and start<end)
                        {
                            start++;
                        }
                         currr=nums[end];
                    
                        while(currr==nums[end]  and end>start)
                        {
                            end--;
                        }                 
                    } 
                }  
                curr=nums[i];
                i++;          
            }
            // if(i<=nums.size()-3 and nums[i]==0)
            // {
            //     if(nums[i+1]==0 and nums[i+2]==0) ans.push_back({0,0,0});
            // }
            return ans;
        }
    };
