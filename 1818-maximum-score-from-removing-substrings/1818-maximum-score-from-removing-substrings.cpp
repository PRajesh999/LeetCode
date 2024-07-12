class Solution {
public:
bool op(string &s,char c1,char c2,int p,int &ans){
    string h="";
    bool k=0;
    for(auto it:s){
    h+=it; 
    if(h.size()>1 and h[h.size()-1]==c2 and h[h.size()-2]==c1){
    h.pop_back();
    h.pop_back();
    ans+=p; 
    k=1;
    }
    }
    s=h;
    return k;
}
    int maximumGain(string s, int x, int y) {
    bool k=1;
    char c1='a',c2='b';
    if(x<y) swap(c1,c2);
    string h="";
    int ans=0;
    while(k){  
        k=op(s,c1,c2,max(x,y),ans);
        k=k | op(s,c2,c1,min(x,y),ans);
    }
    return ans;   
    }
};