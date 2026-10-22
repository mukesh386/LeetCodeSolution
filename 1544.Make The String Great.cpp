class Solution {
public:
    string makeGood(string s) {
        int n = s.length();

        int i =0 ;
        while(i<n){
            if(i>0 && s[i] != s[i-1] && tolower(s[i])==tolower(s[i-1])){
                s=s.substr(0,i-1)+ s.substr(i+1);
                n -=2;
                i -=2;
            }
            i++;
        }

         return s;
    }
};
