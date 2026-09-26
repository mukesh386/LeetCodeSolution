class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0 ;
        int  maxI=0;
        for(int i=0 ;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxI= std::max(maxI,count);
            } else{
                count =0;
            }
        }
        return maxI;
    }
    
};
