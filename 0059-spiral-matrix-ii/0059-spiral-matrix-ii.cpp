class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         vector<vector<int>> grid(n, vector<int> (n,0));
         int dir=1;
         int num=1;
         int top=0,bottom=n-1,right=n-1,left=0;
         while(num<=pow(n,2))
         {
             if(dir==1)
             {
                for(int i=left;i<=right;i++)
                {
                    grid[top][i]=num;
                    num++;
                }
                top++;
                dir=2;
             }

             else if(dir==2)
             {
                 for(int i=top;i<=bottom;i++)
                 {
                     grid[i][right]=num;
                     num++;
                 }
                 right--;
                 dir=3;
             }
             else if(dir==3)
             {
                 for(int i=right;i>=left;i--)
                 {
                    grid[bottom][i]=num;
                    num++;
                 }
                 bottom--;
                 dir=4;
             }

             else if(dir==4)
             {
                 for(int i=bottom;i>=top;i--)
                 {
                     grid[i][left]=num;
                     num++;
                 }
                 left++;
                 dir=1;
             }
         }
          return grid;
    }
};