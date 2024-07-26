class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        int distance[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    distance[i][j]=0;
                }else{
                    distance[i][j]=1e9;
                }
            }
        }

        for(auto it:edges){
            distance[it[0]][it[1]]=it[2];
            distance[it[1]][it[0]]=it[2];
        }

        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    distance[i][j]=min(distance[i][j],distance[i][k]+distance[k][j]);
                }
            }
        }

        int ans;
        int mini=INT_MAX;
        vector<int>reachble(n);
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(i!=j && distance[i][j]<=distanceThreshold){
                    count++;
                }
            }
            reachble[i]=count;
            if(count <= mini){
                mini=count;
                ans=i;
            }
        }


        return ans;


    }
};