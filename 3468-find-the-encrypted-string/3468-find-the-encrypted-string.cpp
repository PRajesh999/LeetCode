class Solution {
public:
    string getEncryptedString(string s, int k) {
        int size = s.size();
        if(k > size){
            k = k%size;
        }
        string ans = s.substr(k)+s.substr(0,k);
        return ans;
    }
};