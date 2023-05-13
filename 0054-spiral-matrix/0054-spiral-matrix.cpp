class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        if (matrix.empty()) {
            return ans; // Return empty vector if matrix is empty
        }
        int dir=0;
        int right=matrix[0].size()-1,left=0,top=0,bottom=matrix.size()-1;
        while(bottom>=top && right>=left)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                ans.push_back(matrix[top][i]);
                }
                dir=1;
                top++;
            }
             else if (dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                ans.push_back(matrix[i][right]);
                }
                dir=2;
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                 ans.push_back(matrix[bottom][i]);
                }
                dir=3;
                bottom--;
            }
            else if(dir==3)
            {
                for(int i=bottom;i>=top;i--)
                {
                ans.push_back(matrix[i][left]);
                }
                left++;
                dir=0;
            }
        }

        return ans;
    }
};
