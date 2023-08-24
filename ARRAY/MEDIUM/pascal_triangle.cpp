class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascal_table(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==0 || j==i) pascal_table[i][j]=1;
                else pascal_table[i][j]=pascal_table[i-1][j-1]+pascal_table[i-1][j];
            }
        }
        vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
               if(pascal_table[i][j]>0) v.push_back(pascal_table[i][j]); 
            }
            res.push_back(v);
        }
        return res;
    }
};
