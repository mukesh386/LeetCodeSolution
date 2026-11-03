class Solution {
public:
const int m =1e9+7;
    int numSub(string s) {
         long long count1=0;
         long long result=0;
         for(char ch:s){
            if(ch=='1'){
             count1++;
            } else {
         result=(result+count1*(count1+1)/2)%m;
         count1=0;
            }
         }
         result =(result+count1 *(count1+1)/2)%m;
         return (int)result;
    }
};
