class Solution {

    int findMax(vector<int> &piles){
       int maxI = INT_MIN;
       int n = piles.size();
       for(int i =0;i<n ;i++){
        maxI =max(maxI ,piles[i]);
       }
       return maxI;
    }

    long long calcuteTotalHour(vector<int> &piles ,int hourly){
        long long totalH= 0 ;
        int n=piles.size();
        for(int i =0 ;i<n;i++){
             totalH+=(piles[i]+(long long )hourly-1)/hourly;
        }
        return totalH;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
int low =1; int high = findMax(piles);
while(low<=high){
    int mid =low+(high-low)/2;
  long long totalH =calcuteTotalHour(piles,mid);
    if(totalH<=h){
        high=mid-1;
    } else {
        low =mid+1;
    }
}
    
        return low ;
    }
};
