class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       map<string,int>A;
       for(int i=0;i<arr.size();i++) A[arr[i]]++;
       for(int i=0;i<arr.size();i++){
        if(A[arr[i]]==1) k--;
        if(k==0) return arr[i];
       }
       return "";
    }
};