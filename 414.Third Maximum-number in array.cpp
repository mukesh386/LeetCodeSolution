class Solution {
public:
    int thirdMax(vector<int>& nums) {  
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        for(long long num :nums){
            if(num==first || num ==second|| num==third){
                continue;
            }
            if(num>first){
                swap(num,first);
            } 
            if(num>second){
                swap(num,second);
            } 
            if(num>third){
                swap(num,third);
            }

        }
        if(third==LLONG_MIN){
            return first ;
        }
        return third;
    }
};
