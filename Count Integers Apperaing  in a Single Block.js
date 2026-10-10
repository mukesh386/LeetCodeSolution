/**
 * @param {number[]} nums
 * @return {number}
 */
var countSpecialIntegers = function(nums) {
    let blocks =new Map();
    for(let i =0 ;i<nums.length;i++){
        if(i==0 || nums[i] !==nums[i-1]) blocks.set(nums[i],(blocks.get(nums[i]) || 0) +1);
    }
    let counter =0 ;
    for(let [nums ,blocksAmount] of blocks)
    if(blocksAmount ===1) counter++;
    return counter;
};
