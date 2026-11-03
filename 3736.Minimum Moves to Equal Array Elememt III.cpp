class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        int count =0;
        int max =nums[n-1];
        for(int i =0 ;i<n;i++){
            count+=max-nums[i];
        }
        return count;
    }
};
