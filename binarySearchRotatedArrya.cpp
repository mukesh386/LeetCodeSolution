class Solution {
public:
    int search(vector<int>& nums, int target) {
        // we can apply binary search on this question 
        // we can not apply direct binary search on this question
        // we neeed to modifiy our binary search algo. for this question 

        int st =0; 
        int  end = nums.size()-1;
        while(st<=end){
            int mid =st + (end-st)/2;
            if(nums[mid]==target){
                return mid ;
            }
             // check where we need to apply binary  search 
             // need to find out which  part of  array is sorted 

            if(nums[st]<=nums[mid]){
                // this is conditon for left half sorted array 
                if(nums[st]<=target &&target <= nums[mid]){
                    end = mid-1;
                } else{
                    st = mid+1;
                }
            } else{
                if (nums[mid]<=target && target <= nums[end]){
                       st = mid+1;
                }else{
                    end = mid-1;
                }
            }
    
        }
        return -1;
    }
};
