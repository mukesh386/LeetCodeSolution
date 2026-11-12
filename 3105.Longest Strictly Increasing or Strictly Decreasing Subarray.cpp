class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n =nums.size();
        int decr =1;
        int incr =1;
        int result =1;
        for(int i =1 ;i<n;i++){
            if(nums[i]>nums[i-1]){
                incr++;
                decr=1;
                result =max(result,incr);
            }else if(nums[i]<nums[i-1]){
                decr++;
                incr=1;
                result =max(result ,decr);
            } else {
                decr=1;
                incr=1;
            }
        }
        return result;
    }
};
