class Solution {
public:
    int maxArea(vector<int>& height) {
        // find out max water conatiner
        // 2 pointer apporch 
        int lp =0;
        int rp = height.size()-1;
        int mw =0;
        while(lp<rp){
            int w= rp-lp;
            int ht = min(height[lp] ,height[rp]);
            int cw = w*ht;
             mw = max(cw,mw);
             height[lp]<height[rp] ? lp++ : rp--;
        }
        return mw;
    }
      
    
};
