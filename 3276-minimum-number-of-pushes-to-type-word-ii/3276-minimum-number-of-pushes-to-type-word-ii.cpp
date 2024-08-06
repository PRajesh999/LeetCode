class Solution {
public:
    int minimumPushes(string word) {
        vector<int>A(26,0);
        for(int i=0;i<word.size();i++){
            int ind = word[i]-'a';
            A[ind]++;
        }
        sort(A.rbegin(),A.rend());
        int sum = 0;
        int p = 1;
        for(int i=0;i<26;i++){
            if(A[i]==0) break;
            if(i%8==0 and i!=0) p++;
            sum+=p*A[i];
        }
        return sum;
    }
};