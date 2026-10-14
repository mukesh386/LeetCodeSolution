class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector <int> res;
    vector <int> dict(101,0);
     for(int i =0 ;i<nums.size();i++){
        dict[nums[i]]++;
     }
     while(true){
        bool found = false;
        for(int i =0 ;i<dict.size();i++){
            if(dict[i]>0){
                dict[i]--;
                res.push_back(i);
                found = true ;
            }
        }
        if(!found) break ;
     }
    return res;
    }
};
