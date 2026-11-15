class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n =rating.size();
        int teams =0;
        for(int j =1 ;j<n-1;j++){
            int countSamllerLeft =0 ;
            int countLargerLeft =0 ;
            int countSamllerRight =0;
            int countLargerRight =0;
            for(int i =0 ;i<j;i++){
                if(rating[i]< rating[j]){
                    countSamllerLeft++;
                } else if(rating[i] >rating[j]){
                    countLargerLeft++;
                }
            }

            for(int k =j+1 ; k<n ;k++){
                if(rating[j] <rating[k]){
                    countLargerRight++;
                } else if(rating[j] >rating[k]){
                    countSamllerRight++;
                }
            }
            teams +=(countLargerLeft*countSamllerRight) + (countSamllerLeft*countLargerRight);
        }
        return teams;
    }
};
