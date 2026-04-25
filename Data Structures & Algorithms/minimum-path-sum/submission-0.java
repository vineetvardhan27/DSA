class Solution {
   int f(int i,int j,int n,int m,int[][] grid,int[][] dp){
    if(i>=n || j>=m){
        return Integer.MAX_VALUE;
    }
    if(i==n-1 && j==m-1){
        return dp[i][j]=grid[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int right=f(i,j+1,n,m,grid,dp);
    int down=f(i+1,j,n,m,grid,dp);
     dp[i][j]=grid[i][j]+Math.min(right,down);
     return dp[i][j];
   }
    public int minPathSum(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;

        int[][] dp=new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dp[i][j]=-1;
            }
        }
        return f(0,0,n,m,grid,dp);
        
    }
}