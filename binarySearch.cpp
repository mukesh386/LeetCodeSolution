class Solution {
public:
    int search(vector<int>& nums, int target) {
        // apply bianry search
        int st = 0; 
        int end = nums.size()-1;
      // condition for bianry search 
      while(st<=end){
        int mid = (st+end) /2;
        if (target >nums[mid]){
            st = mid +1 ;
        } else if (target <nums[mid]){
            end = mid-1 ;
        } else {
            return mid;
        }
    
      }
      return -1;
    }
};
